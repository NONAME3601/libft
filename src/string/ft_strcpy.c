char *ft_strcpy(char *dest, const char *src)
{
	char *dest_copy = dest;

	while ((*dest++ = *src++))
		;
	return dest_copy;
}