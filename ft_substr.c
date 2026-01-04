char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        char    *substr;
        size_t  alloc_space;
        size_t  s_len;
        size_t  i;

        if (!s)
                return (NULL);
        s_len = strlen(s);
        if (start > s_len)
                return ("");
        if (len > s_len - start)
                alloc_space = s_len - start;
        else
                alloc_space = len;
        substr = (char *)malloc(alloc_space + 1);
        if (!substr)
                return (NULL);
        i = 0;
        while (s[start + i] || i < len)
        {
                substr[i] = s[start + i];
                i++;
        }
        return (substr);
}
