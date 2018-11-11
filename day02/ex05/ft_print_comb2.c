/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 20:04:29 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/25 23:27:38 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{
	int	first_num;
	int second_num;
	int third_num;
	int fourth_num;

	first_num = 48;
	while (first_num < 58)
	{
		second_num = 48;
		while (second_num < 58)
		{
			third_num = 48;
			while (third_num < 58)
			{
				fourth_num = 48;
				while (fourth_num < 58)
				{
					ft_putchar((char)first_num);
					ft_putchar((char)second_num);
					ft_putchar((' '));
					ft_putchar((char)third_num);
					ft_putchar((char)fourth_num);
					ft_putchar(',');
					ft_putchar((' '));
					fourth_num++;
					if (second_num == 56 && first_num == 57)
					{
						break ;
					}
				}
				third_num++;
			}
			second_num++;
		}
		first_num++;
	}
}
