int ft_strcmp(const char *s1, const char *s2)
{
	int res = 0;

	while (!(res = *s1 - *s2++) && *s1++)
		;
	return res;
}