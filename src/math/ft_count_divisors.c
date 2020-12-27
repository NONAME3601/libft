int ft_count_divisors(int n)
{
	int res = 1;
	int i = 2;
	int k = 0;

	while (i * i <= n)
	{
		if (n % i == 0)
		{
			n /= i;
			k++;
		}
		else
		{
			res *= k + 1;
			k = 0; 			
			++i;
		}
	}
	return (n != 1) ? 2 * res : res;
}