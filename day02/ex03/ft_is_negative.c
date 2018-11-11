/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:23:39 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/25 16:57:48 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int c)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if (c >= 0)
	{
		ft_putchar(positive);
	}
	else
	{
		ft_putchar(negative);
	}
}
