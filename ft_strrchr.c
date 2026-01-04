char    *ft_strrchr(const char *s, int c)
{
        int     i;

        i = strlen(s);
        if ((s[i] + 1) == c)
                return ((char *)&s[i] + 1);
        while (i)
        {
                if (s[i] == c)
                        return ((char *)&s[i]);
                i--;
        }
        return (NULL);
}
