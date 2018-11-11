/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 10:57:22 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/27 23:06:49 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nb_value;

	nb_value = nb;
	if (power < 0)
	{
		return (0);
	}
	while (power > 1)
	{
		nb_value *= nb;
		power--;
	}
	return (nb_value);
}
