void    ft_bzero(void *s, size_t n)
{
        unsigned char   *erase;
        size_t  bytes;

        erase = (unsigned char)s;
        bytes = 0;
        while (bytes < n)
        {
                erase[bytes] = '\0';
                bytes++;
        }
}
