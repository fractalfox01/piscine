int ft_numlen(int nbr)
{
	int i;
	char nb;
	int find = nbr;
	int incra = 1;

	i = 0;
	nb = 1;
	while (find > 0)
	{
		find /= incra;
		incra = (nb * 10);
		i++;
	}
	return (i);
}
