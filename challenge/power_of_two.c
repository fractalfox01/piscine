/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power_of_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:31:47 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/14 18:04:02 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		psudo_atoi(char *str)
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

int	ft_power_of(unsigned int nbr)
{
	int i;
	int ans;

	i = 0;
	ans = nbr;
	while (i < (ans / 2))
	{
		if ((i * i) == nbr)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("answer: %d\n", ft_power_of(psudo_atoi(argv[1])));
	}
	else
		printf("No Input.\n");
	return (0);
}
