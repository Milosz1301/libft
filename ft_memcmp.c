int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
        unsigned char   *array1;
        unsigned char   *array2;
        size_t  i;

        if (n == 0)
                return (0);
        array1 = (unsigned char) s1;
        array2 = (unsigned char) s2;
        i = 0;
        while (i < n)
        {
                if (array1[i] != array2[i])
                        return (array1[i] - array2[i])
                i++;
        }
        return (array1[i] - array2[i]);
}
