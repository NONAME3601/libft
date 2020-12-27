long long ft_simple_pow(long long base, long long exponent)
{
	long long res = 1;

	for (int i = 0; i < exponent; ++i)
	{
		res *= base;
	}
	return res;
}