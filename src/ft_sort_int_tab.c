void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int buf;
	int min = 0;
	while (i < size)
	{
		if (tab[min] > tab[i])
		{
			buf = tab[i];
			tab[i] = tab [min];
			tab[min] = buf;
		}
		++i;
	}
}