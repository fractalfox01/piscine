/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 19:18:47 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/27 23:07:58 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int count_down;

	count_down = (int)(nb / 2);
	if (nb == 1 || nb == 0)
	{
		return (0);
	}
	if ((nb % 2) == 0 && nb != 2)
	{
		return (0);
	}
	while ((nb % count_down) > 0)
	{
		printf("checking count: %");
		if (count_down == 1)
		{
			printf("found: %d\n", nb);
			return (1);
		}
		count_down--;
	}
	return (0);
}

int	main(void)
{
	int	a;

	a = 100;
	while (a > 0)
	{
		ft_is_prime(a);
		a--;
	}
	return (0);
}
