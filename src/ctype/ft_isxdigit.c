int     ft_isxdigit(int c)
{
    return ((c >= 'A' && c <= 'F') ||
    (c >= 'a' && c <= 'f') ||
    (c >= '0' && c <= '9'));
}