#include <math.h>

unsigned int ft_nbr_len(long long nbr)
{
    unsigned int i;

    while (nbr)
    {
        nbr /= 10;
        i++; 
    }
    return i;
}