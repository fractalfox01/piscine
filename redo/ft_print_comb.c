void ft_putchar(char c);

void	show_it(int i, int j, int k)
{
       	ft_putchar((char)(i + 48));
       	ft_putchar((char)(j + 48));
       	ft_putchar((char)(k + 48));
}

void    ft_print_comb(void)
{
        int i;
        int j;
        int k;

        i = 0;
        j = 1;
        k = 2;
        while (i < 10)
        {
                while (j < 10)
                {
                        while (k < 10)
                        {
				if (i != j && i != k && j != k)
				{
                                	show_it(i, j, k);
					if ((i + j + k) != 24)
                                		ft_putchar(',');
				}
				k++;
                        }
			k = (j + 1);
			j++;
                }
		j = (i + 1);
		i++;
        }
}
