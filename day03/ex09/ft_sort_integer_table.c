void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	a;
	int	temp;

	i = 0;
	a = 0;
	temp = 0;
	while (a < size)
	{
		while ((i + 1) < size)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp; 
			}
			i++;
		}
		i = 0;
		a++;
	}
}
