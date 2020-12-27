#include "ft_string.h"
#include <stddef.h>
		   
char *ft_strncat(char *dest, const char *src, size_t n)
{
	char *dest_copy = dest;

	while (*dest)
		++dest;

	// "fshbtrsb"\0 ""\0

	while (n-- > 0 && (*dest++ = *src++))
		;
	*dest = 0;
	return dest_copy;
}