/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:37:00 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/14 15:56:39 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha()
{
	int	i;

	i = 0;
	while (i < 26)
	{
		if ((i % 2) == 1)
			ft_putchar(i + 65);
		else
			ft_putchar(i + 97);
		i++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	maff_alpha();
	return (0);
}
