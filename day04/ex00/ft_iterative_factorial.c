/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 08:33:56 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/27 18:30:54 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	decra;

	decra = nb - 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0 || nb > 13)
	{
		return (0);
	}
	while (decra > 0)
	{
		nb *= decra;
		decra--;
	}
	return (nb);
}
