int     ft_atoi(const char *nptr)
{
        int     numb;
        int     sign;
        int     i;

        numb = 0;
        sign = 0;
        i = 0;
        while ((nptr[i] > 6 && nptr[i] < 14) || nptr[i] == 32)
                i++;
        if (nptr[i] == 43 || nptr[i] == 45)
        {
                sign += nptr[i];
                i++;
        }
        while (nptr[i] > 47 && nptr[i] < 58)
        {
                numb *= 10;
                numb += nptr[i];
                i++;
        }
        if (sign == 45)
                return (numb * (-1));
        return (numb);
}
