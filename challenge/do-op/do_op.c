/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:33:58 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/15 11:15:09 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	do_op(char *nbr1, char *oper, char *nbr2)
{
	int nb1;
	int nb2;

	nb1 = ft_atoi(nbr1);
	nb2 = ft_atoi(nbr2);
	if (oper[0] == '+')
		ft_putnbr(nb1 + nb2);
	else if (oper[0] == '-')
		ft_putnbr(nb1 - nb2);
	else if (oper[0] == '/')
		ft_putnbr(nb1 / nb2);
	else if (oper[0] == '%')
		ft_putnbr(nb1 % nb2);
	else if (oper[0] == '*')
		ft_putnbr(nb1 * nb2);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		do_op(argv[1], argv[2], argv[3]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
