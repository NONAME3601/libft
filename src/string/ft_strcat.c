#include "ft_string.h"
		   
char * ft_strcat(char *dest, const char *src)
{
	char *dest_copy = dest;
	while (*dest)
		++dest;
	ft_strcpy(dest, src);
	return dest_copy;
}