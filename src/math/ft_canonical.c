#include <stdio.h>
#include "ft_math.h"

void ft_canonical(int n)
{
	int i = 2;
	
	while (i * i <= n)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			if (n != 1)
				printf(" * ");
			n /= i;
		}
		else
			++i;
	}
	
	if (n != 1)
		printf("%d", n);
}