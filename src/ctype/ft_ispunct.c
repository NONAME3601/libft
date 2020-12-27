#include "ft_ctype.h"

int ft_ispunct (int k)
{
    return (ft_isprint(k) && !ft_isalnum(k));
}