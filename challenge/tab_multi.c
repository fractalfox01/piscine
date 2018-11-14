/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_multi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:22:59 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/13 18:49:45 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	int i;
	
	i = nbr;
	if (i / 10 > 0)
	{
		ft_putnbr(i / 10);
	}
	ft_putchar((i % 10) + 48);
}

int	ft_atoi(char *str)
{
	int i;
	int fin;

	i = 0;
	fin = 0;
	while (str[i] != '\0')
	{
		fin = fin * 10 + str[i] - 48;
		i++;
	}
	return (fin);
}

void	tab_multi(char *nbr)
{
	int i;
	int b;
	int ans;
	int fin;

	i = 1;
	b = 1;
	ans = ft_atoi(nbr);
	while (i <= ans)
	{
		fin = i * ans;
		ft_putnbr(b);
		ft_putstr(" x ");
		ft_putstr(nbr);
		ft_putstr(" = ");
		ft_putnbr(fin);
		ft_putchar('\n');
		b++;
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		tab_multi("9");
		ft_putstr("=============\n===========\n");
		tab_multi("36");
	}
	else if (argc > 1)
	{
		tab_multi(argv[1]);
	}
	return (0);
}
