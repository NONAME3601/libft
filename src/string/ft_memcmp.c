#include <stddef.h>

int ft_memcmp(	const void *str1,
				const void *str2,
				size_t n)
{
	int res = 0;

	while (n-- &&
			!(res = *(unsigned char*)str1 - *(unsigned char*)str2++) &&
			*(unsigned char*)str1++)
		;
	return res;
}