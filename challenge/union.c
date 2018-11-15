/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 22:19:50 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/14 23:31:59 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *  Assignment name  : union
 *	Expected files   : union.c
 *	Allowed functions: write
 *	--------------------------------------------------------------------------------
 *	
 *	Write a program that takes two strings and displays, without doubles, the
 *	characters that appear in either one of the strings.
 *	
 *	The display will be in the order characters appear in the command line, and
 *	will be followed by a \n.
 *	
 *	If the number of arguments is not 2, the program displays \n.
 *	
 *	Example:
 *	
 *	$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
 *	zpadintoqefwjy$
 *	$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
 *	df6vewg4thras$
 *	$>./union "rien" "cette phrase ne cache rien" | cat -e
 *	rienct phas$
 *	$>./union | cat -e
 *	$
 *	$>
 *	$>./union "rien" | cat -e
 *	$
 *	$>
**/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	unionizer(char *s1, char *s2)
{
	int i;
	int j;
	int len1;
	int len2;

	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while (i < len1)
	{
		while (j < len2)
		{
			if (s1[i] == s2[j])
			{
				ft_putchar(s1[i]);
				break ;
			}
			else
			{
				j++;
			}
		}
		i++;
		j = i;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		unionizer(argv[1], argv[2]);
	}
	return (0);
}
