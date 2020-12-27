#include "ft_string.h"

#include <stdlib.h>
#include <stddef.h>

char *ft_strndup(const char *s, size_t n)
{
	char *res = (char*)malloc((n + 1) * sizeof(char));
	if (res != NULL)
	{
		ft_strncpy(res, s, n);
		*(res + n) = 0;
	}
	return res;
}