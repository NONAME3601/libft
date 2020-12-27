int ft_iscntrl(int k)
{
    return (k == 0 || (k >= 7 && k <= 13) ||
            k == 26 || k == 27);
}