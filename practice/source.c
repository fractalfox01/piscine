/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 22:21:11 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/05 16:13:17 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

typedef void (*funptr)(char);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int x;
	int *y;
	//void (*f)(char);//
	
	funptr	f;

	x = 42;
	y = &x;
	f = &ft_putchar;
	f(52);
	f(50);
	f('\n');
	printf("A Simple test program for learning make.\n");
	printf("Y: %d\n", *y);
	

	return (0);
}
