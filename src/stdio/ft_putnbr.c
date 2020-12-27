#include <unistd.h>

void ft_putnbr(int nbr)
{
    char k;
    char c = (nbr < 0) ? -1 : 1;

    if (nbr / 10 != 0)
        ft_putnbr(nbr / 10);
    else if (nbr < 0)
        write(1, "-", 1); 
    k = '0' + (nbr % 10) * (c);
    write(1, &k, 1);
}