#include "ft_string.h"
#include <stddef.h>

size_t ft_word_count(char *str, const char *sep)
{
	size_t count = 0;
	int state = 0; 
	
	if (sep == NULL)
		sep = " ";
	
	while (*str++)
	{
		if (!ft_strchr(sep, *str))
		{
			if (!state)
				count++;
			state = 1;
		}
		else
			state = 0;
	}

	return count;
}