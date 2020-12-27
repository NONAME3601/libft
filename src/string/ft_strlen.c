int ft_strlen(const char *str)
{
    int res = 0;

    while (*str++)
        ++res;
    return res;
}