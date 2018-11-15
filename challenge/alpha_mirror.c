/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:13:34 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/14 21:50:53 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char mirror(char c)
{
	int i = 0;
	int a = (int)(c);
	if (a > 64 && a < 91)
	{
		a = 26 - (a - 64);
		return ((char)(a + 65));
	}
	if (a > 96 && a < 123)
	{
		a = 26 - (a - 96);
		return ((char)(a + 97));
	}
	return (c);
}

void	alf_from_space(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = mirror(str[i]);
		i++;
	}
	ft_putstr(str);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		alf_from_space(argv[1]);
	}
	return (0);
}
