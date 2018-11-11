/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:26:45 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/27 18:12:05 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	dec;

	dec = nb;
	if (nb == 0)
	{
		return (0);
	}
	while ((dec * dec) > nb)
	{
		dec /= 2;
	}
	while ((dec * dec) < nb)
	{
		dec++;
	}
	if ((dec * dec) == nb)
	{
		return ((int)dec);
	}
	return (0);
}
