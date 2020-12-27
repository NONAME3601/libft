#include <unistd.h>

void print_pair(int first, int second)
{
    char c;

    c = '0' + first / 10;
    write(1, &c, 1);
    c = '0' + first % 10;
    write(1, &c, 1);
    write(1, " ", 1);
    c = '0' + second / 10;
    write(1, &c, 1);
    c = '0' + second % 10;
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int first;
    int second;

    first = 0;
    while (first <= 98)
    {
        second = first + 1;
        while (second <= 99)
        {
            print_pair(first, second);
            if (!(first == 98 && second == 99))
            {
                write(1, ", ", 2);
            }
            ++second;
        }
        ++first;
    }
}