#include "ft_string.h"
#include <stddef.h>
#include <stdlib.h>

char **ft_split(char *str, char *sep)
{
	size_t count = ft_word_count(str, sep);
	char **res = (char**)malloc(sizeof(char*) * (count + 1));
	size_t i = 0;
	int j = 0; 
	
	if (!res)
	{
		return NULL;
	}

	while(*str != 0)
	{
		if(ft_strchr(sep, *str))
		{
			if (i != 0)
			{
				res[j] = (char*)malloc(sizeof(char) * (i + 1)); 
				ft_strncpy(res[j++], str - i, i)[i] = 0;
			}
			i = 0;				
		} 
		else
		{
			++i;
		}
		++str;
	}
	res[count] = 0;
	return(res);
}

// malloc
// strelng dn drj nidn
// " n"

// strel
// g
// d
// drj
// id
// NULL