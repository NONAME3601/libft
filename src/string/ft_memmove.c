#include <stddef.h>

void *ft_memmove(void *destptr, const void *srcptr, size_t num)
{
	void * dest = destptr;
	size_t i;

	while (i != num)
	{
		*(unsigned char*)dest++ = *(unsigned char*)srcptr++;
		++i;
	}
	return destptr;
}