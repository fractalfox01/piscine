/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 18:14:02 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/01 18:30:20 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_generic(void)
{
	int		i;
	char	*tut;

	i = 0;
	tut = "Tut tut ; Tut tut";
	while (i < 18)
	{
		ft_putchar(tut[i]);
		i++;
	}
	ft_putchar('\n');
}
