long long gcd(long long a, long long b)
{
	while (a != 0 && b != 0)
	{
		if (a > b)
			a %= b;
		else
			b %= a;
	}
	return a + b;
}

long long gcd_rec(long long a, long long b)
{
	if (b == 0)
		return a;
	return gcd_rec(b, a % b);
}