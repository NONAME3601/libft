int ft_is_prime(unsigned long long num)
{
	unsigned long long i = 2;
	while (num % i && i * i < num)
	{
		++i;
	}
	return num % i || num == 2;
}