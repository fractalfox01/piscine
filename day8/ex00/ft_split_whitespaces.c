/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 08:35:31 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/02 13:12:05 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			a++;
		}
		i++;
	}

	return (i - a);
}

int		white_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32)
	{
		i++;
	}
	return (i);
}

int		num_of_strings(char *str)
{
	int	i;
	int a;

	i = 0;
	a = 1;
	while (str[i] != '\0')
	{
		if(str[i] == 32){
			while (str[i] == 32)
				i++;
			a++;
		}
		i++;
	}
	return (a);
}

char **ft_split_whitespaces(char *str)
{
	char	**rt_strings;
	int		i;
	int		str_start;
	int		total_len;
	int		number_of;
	int		current_str;
	

	printf("length: %d, num of: %d\n", ft_strlen(str), num_of_strings(str));
	i = 0;
	str_start = 0;
	total_len = ft_strlen(str);
	number_of = num_of_strings(str);
	current_str = 0;
	rt_strings = (char **)malloc(sizeof(char) * (total_len + number_of));
	while (i < 41)
	{
		while (str[i] != 32 && str[i] != '\0')
		{
			rt_strings[current_str][str_start] = str[i];
			i++;
			str_start++;
		}
		str_start = 0;
		while (str[i] == 32)
			i++;
		current_str++;
	}
	return (rt_strings);
}

int		main(int argc, char **argv)
{
	int	a;
	int	i;
	char **holder;

	a = 1;
	i = 0;
	if (argc > 1)
	{
		while (a < argc)
		{
			holder = ft_split_whitespaces(argv[a]);
			a++;
		}
		a = 0;
		while (a < argc)
		{
			while (holder[a][i] != '\0')
			{
				printf("contents of: %c\n", holder[a][i]);
				i++;
			}
			a++;
		}
	}
	return (0);
}
