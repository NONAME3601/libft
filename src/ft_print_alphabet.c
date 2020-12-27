#include <unistd.h>

void ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

void ft_print_alphabet_1(void)
{
    char i = 'a';

    while (i <= 'z')
    {
        write(1, &i, 1);
        i++;
    }
}