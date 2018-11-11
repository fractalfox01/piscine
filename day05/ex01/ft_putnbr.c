/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 10:26:23 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/30 11:37:31 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long int	temp_nb;

	temp_nb = nb;
	if (temp_nb < 0)
	{
		ft_putchar('-');
		temp_nb = -1 * temp_nb;
	}
	if (temp_nb / 10 > 0)
	{
		ft_putnbr(temp_nb / 10);
	}
	ft_putchar((temp_nb % 10) + 48);
}
