#include "ft_string.h"
#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int res = 0;

	while (n-- > 0 && !(res = *s1 - *s2++) && *s1++)
		;
	return res;
}