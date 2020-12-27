int ft_isalnum(int k)
{
    return ((k >= 'A' && k <= 'Z') ||
            (k >= 'a' && k <= 'z') ||
            (k >= '0' && k <= '9'));
}