char    *ft_strdup(const char *s)
{
        char    *new_str;

        if (!s || *s)
                return (NULL);
        new_str = (char *)malloc(sizeof(char) * strlen(s));
        while (*s)
        {
                *new_str = *s;
                s++;
        }
        return (new_str);
}
