char    *ft_strjoin(char const *s1, char const *s2)
{
        char    *str;
        char    *str_address;

        if (!s1 || !s2)
                return (NULL);
        str = (char *)malloc(strlen(s1) + strlen(s2) + 1);
        if (!str)
                return (NULL);
        str_address = str;
        while (*s1)
                *(str++) = *(s1++);
        while (*s2)
                *(str++) = *(s2++);
        *str = '\0';
        return (str_address);
}
