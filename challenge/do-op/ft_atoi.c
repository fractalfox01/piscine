/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:01:52 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/15 10:25:06 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int fin;
	int neg;

	i = 0;
	fin = 0;
	neg = 1;
	while (str[i] == ' ')
		i++;
	if ((str[i] > 57 || str[i] < 48) && (str[i] != '+' && str[i] != '-'))
		return (0);
	else if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] < 58 && str[i] > 47))
	{
		fin = fin * 10 + str[i] - 48;
		i++;
	}
	return ((fin * neg));
}
