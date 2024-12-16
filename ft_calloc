void    *ft_calloc(size_t nmemb, size_t size)
{
        unsigned char   *memory_allocation;
        size_t  array;
        size_t  i;

        if (!nmemb && !size)
                return (malloc(0));
        if (nmemb >= 2147483647/size)
                return (NULL);
        array = nmemb * size;
        i = 0;
        memory_allocation = malloc(array);
        while (i < array)
        {
                array[i] = 0;
                i++;
        }
        return((void *)memory_allocation);
}
