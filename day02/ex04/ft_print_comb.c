/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:52:05 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/25 19:51:48 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int	first_num;
	int	changer_one;
	int	changer_two;

	first_num = 48;
	changer_one = 49;
	changer_two = 50;
	while (first_num < 58)
	{
		while (changer_one < 58)
		{
			while (changer_two < 58)
			{
				ft_putchar((char)first_num);
				ft_putchar((char)changer_one);
				ft_putchar((char)changer_two);
				if (first_num < 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				changer_two += 1;
			}
			changer_one += 1;
		}
		first_num += 1;
		changer_one = first_num + 1;
		changer_two = changer_one + 1;
	}
}
