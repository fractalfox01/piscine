/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 17:18:23 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/01 22:25:26 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

int		allocate(char **argv, int argc)
{
	int	i;
	int size;

	i = 1;
	size = 0;
	while (i < argc)
	{
		size += ft_strlen(argv[i]);
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		a;
	int		b;
	int		total_len;
	char	*concatted;

	i = 1;
	a = 0;
	b = 0;
	total_len = allocate(argv, argc);
	concatted = (char *)malloc(sizeof(char) * (total_len + (argc - 1)));
	while (i < argc)
	{
		while (argv[i][b] != '\0')
		{
			concatted[a] = argv[i][b++];
			a++;
		}
		concatted[a++] = '\n';
		b = 0;
		i++;
	}
	a--;
	concatted[a] = '\0';
	return (concatted);
}
