#include "ft_string.h"
#include <stddef.h>
#include <stdlib.h>

size_t wordc(char **str_1, size_t *j)
{	
	size_t i = 0;
	
	*j = 0;
	while(*str_1)
	{
		i += ft_strlen(*str_1);
		++*j;
		str_1++;
	}	
	return i;
}

char *ft_join (char **str_1, char *str_2)
{
	size_t i = 0;
	size_t j = 0;
	char *res = NULL;
	
	i += wordc(str_1, &j) + (j - 1) * ft_strlen(str_2);

	if (j == 0 || !(res = malloc(sizeof(char) * (i + 1))))
	{
		return NULL;
	}

	while(*str_1)
	{
		ft_strcpy(res, *str_1);
		j--;
		if (j)
		{
			ft_strcpy(res, str_2);
		}
		str_1++;
	}

	return res;
}