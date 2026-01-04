char    *ft_strnstr(const char *big, const char *little, size_t len)
{
        size_t  i;
        size_t  j;
        size_t  needle_len;

        if (!*s)
                return ((char *)big);
        i = 0;
        j = 0;
        needle_len = strlen(little);
        while (i < len || big[i])
        {
                j = 0;
                while (big[i + j] == little[j])
                {
                        j++;
                }
                if (j == needle_len)
                        return ((char *)big + i);
                i++;
        }
        return (NULL);
}
