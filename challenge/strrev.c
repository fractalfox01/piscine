/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:20:30 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/14 18:56:49 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		str_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int 	i;
	int 	a;
	int		b;
	char	c;
	
	a = str_len(str) - 1;
	b = str_len(str);
	i = 0;
	while (i < b/2)
	{
		c = str[i];
		str[i] = str[a];
		str[a] = c;
		a--;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%s\n", ft_strrev(argv[1]));
	}
	return (0);
}
