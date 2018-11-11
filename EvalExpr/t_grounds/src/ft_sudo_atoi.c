/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudo_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 20:22:58 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/10 20:28:11 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sudo_atoi(char *str, int start)
{
	int fin;
	int i;
	int pos_neg;

	i = start;
	fin = 0;
	pos_neg = 1;
	while (str[i] > 57 || str[i] < 48)
	{
		i++;
	}
	if (str[i - 1] == '-' || str[i - 1] == '+')
	{
		if (str[i - 1] == '-')
			pos_neg = -1;
	}
	while (str[i] < 58 && str[i] > 47 && str[i] != '\0')
	{
		fin = fin * 10 + str[i] - 48;
		i++;
	}
	fin *= pos_neg;
	return (fin);
}
