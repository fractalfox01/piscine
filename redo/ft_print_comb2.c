void ft_putchar(char c);

void	show_it(int i, int j)
{
	ft_putchar(' ');
	ft_putchar((char)((i / 10) + 48));
	ft_putchar((char)((i / 10) + 48));
	ft_putchar(' ');
	ft_putchar((char)((j / 10) + 48));
	ft_putchar((char)((j % 10) + 48));
	if (i != 98)
		ft_putchar(',');

}


void	get_it(int i)
{
	int j = i;
	while (i++ < 98)
	{
		while (j++ < 99)
		{
			show_it(i, j);
		}
		j = i + 1;
	}

}

void	ft_print_comb2(void)
{
	int i;

	i = 0;
	get_it(i);
}
