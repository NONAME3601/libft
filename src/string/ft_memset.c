#include <stddef.h>

void *ft_memset(void *dest, int c, size_t n)
{
	unsigned char *dest_copy = dest;
	
	while (n--)
		*(unsigned char*)dest++ = (unsigned char)c;
	return dest_copy;
}