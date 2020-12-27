#include <unistd.h>

void ft_print_reverse_alphabet(void)
{	
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

void ft_print_reverse_alphabet_1(void)
{
    char i = 'z';

    while (i >= 'a')
    {
        write(1, &i, 1);
        i--;
    }
}