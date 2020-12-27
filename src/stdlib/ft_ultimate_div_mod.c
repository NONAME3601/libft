void ft_ultimate_div_mod(int *a, int *b)
{
    int buf_1;

    buf_1 = *a % *b;
    *a = *a / *b;
    *b = buf_1;
}