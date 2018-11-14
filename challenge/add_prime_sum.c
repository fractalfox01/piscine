/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:24:01 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/13 19:40:19 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	write(str[i] != '\0')
	{
		ft_putchar(str[i]);
	}
}

void	ft_putnbr()
{
	
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
	
}
