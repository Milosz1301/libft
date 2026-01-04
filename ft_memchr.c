void    *ft_memchr(const void *s, int c, size_t n)
{
        unsigned char   *memory;
        size_t  i;

        memory = s;
        i = 0;
        while (i < n)
        {
                if (memory[i] == c)
                        return ((void *)&memory[i])
                i++;
        }
        return (NULL);
}
