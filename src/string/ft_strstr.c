#include <stddef.h>

char *ft_strstr(const char *str, const char *needle)
{
	const char *temp_str;
	const char *temp_needle;

	while (*str)
	{
		temp_needle = needle;
		temp_str = str;

		while (*temp_needle && *temp_needle++ == *temp_str++)
			;
		if (!*temp_needle)
			return (char*)str;
		++str;
	}
	return NULL;
}

/*char *ft_strstr(const char *str, const char *needle)
{
	int i = 0;
	int j = 0;
	while (*str != 0)
	{
		i = 0;
		j = 0;
		while (str[j] == needle[i] && str[i] != 0)
		{
			++j;
			++i;
		}
		if (needle[i] == 0)
		{
			return ((char*)str);
		}
		++str;	
	}
}*/