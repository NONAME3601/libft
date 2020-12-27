#include <stddef.h>

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	char *dest_copy = dest;
	size_t i = 0;

	while (i++ < n && (*dest++ = *src++))
		;
	while (i++ < n)
		*dest++ = '\0';

	return dest_copy;
}