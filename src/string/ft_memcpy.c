#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *dest_copy = dest;

	while (n--)
		*(unsigned char*)dest++ = *(unsigned char*)src++;
	return dest_copy;
}