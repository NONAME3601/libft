#include <stddef.h>

const void *ft_memchr(const void *ptr, int c, size_t n)
{
	while (n-- && *(unsigned char*)ptr != c)
		++ptr;
	return (*(unsigned char*)ptr == c) ? ptr : NULL;
}