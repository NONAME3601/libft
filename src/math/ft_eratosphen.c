#include <stddef.h>
#include <stdlib.h>

char* ft_eratosphen(size_t k)
{
	char *mas = calloc(k + 1, sizeof(char));
	/*int i = 0;
	int j = 2;

	while (j * j <= k)
	{
		if (mas[j] == 0)
		{
			i = 2;
			while(i * j < k)
			{
				mas[i * j] = 1;
				i++;
			}
		}
		++j;
	}*/
	return mas;
}