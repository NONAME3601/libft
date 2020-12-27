long long ft_pow_rec(long long a, long long b)
{
	if (!b)
		return 1;
	if (b % 2)
	{
		return a * ft_pow_rec(a, b - 1);
	}
	else
	{
		a = ft_pow_rec(a, b / 2);
		return a * a;
	}
}