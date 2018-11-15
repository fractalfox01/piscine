/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 19:17:38 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/14 19:35:12 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

void	wd_match(char *s1, char *s2)
{
	int i;
	int j;
	int count;
	int a;
	int b;

	i = 0;
	j = 0;
	count = 0;
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	while (i < a)
	{
		while (j < b)
		{
			if (s1[i] == s2[j])
			{
				count++;
				break ;
			}
			j++;
		}
		i++;
	}
	if (count == a)
	{
		printf("Is contained.\n");
	}
	else
	{
		printf("Nopers.\n");
	}
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		wd_match(argv[1], argv[2]);
	}
	return (0);
}
