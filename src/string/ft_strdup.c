#include "ft_string.h"

#include <stdlib.h>
#include <stddef.h>

char *ft_strdup(const char *s)
{
	char *res = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (res != NULL)
		ft_strcpy(res, s);
	return res;
}