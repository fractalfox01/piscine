/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:24:01 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/14 13:09:29 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	int fin;

	fin = nbr;
	if (fin < 0)
	{
		ft_putchar('-');
		fin = fin * -1;
	}
	if (fin / 10 > 0)
	{
		ft_putnbr(fin / 10);
	}
	ft_putchar((fin % 10) + 48);
}

int		ft_atoi(char *str)
{
	int	i;
	int	fin;

	i = 0;
	fin = 0;
	while (str[i] != '\0')
	{
		fin = fin * 10 + str[i] - 48;
		i++;
	}
	return (fin);
}

void	add_prime_sum(char *str)
{
	int nbr = ft_atoi(str);
	int list[nbr - 2];
	int i = 0;
	int a = 2;
	int ans = 0;
	
	while (a < nbr)
	{
		list[i] = a;
		a++;
		i++;
	}
	i = 0;
	a = 2;
	while (a < (nbr-2))
	{
		while (list[i] < nbr)
		{
			if (list[i] > 0)
			{
				if ((list[i] % a) == 0 && list[i] != a)
				{
					list[i] = list[i] * -1;
				}
			}
			i++;
		}
		i = 0;
		a++;
	}
	i = 0;
	while (i < (nbr-2))
	{
		if (list[i] > 0)
		{	
			ans += list[i];
		}
		i++;
	}
	ft_putnbr(ans);
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{	
		int nbr = ft_atoi(argv[1]);
		if (nbr > 0)
			add_prime_sum(argv[1]);
		else
		{
			ft_putstr("0\n");
		}
	}
	else
		ft_putstr("0\n");
	return (0);
}
