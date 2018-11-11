/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 08:13:45 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/30 11:28:52 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_atoi(char *str)
{
	int fin;
	int i;
	int pos_neg;

	i = 0;
	fin = 0;
	pos_neg = 1;
	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pos_neg = -1;
		i++;
	}
	while (str[i] < 58 && str[i] > 47 && str[i] != '\0')
	{
		fin = fin * 10 + str[i] - 48;
		i++;
	}
	fin *= pos_neg;
	return (fin);
}
