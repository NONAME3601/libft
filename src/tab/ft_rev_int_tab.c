#include <stddef.h>

#include "ft_tab.h"

void ft_rev_int_tab(tab_t *tab, size_t size)
{
    size_t i = size - 1;
    size_t j = 0;

    while (i > (size / 2))
        ft_swap_tab(tab + i--, tab + j++);
}