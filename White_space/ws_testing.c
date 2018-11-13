/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ws_testing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:43:55 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/12 22:04:22 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_len(char *str)
{
	int i = 0;
	int a = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			a++;
		}
		i++;	
	}
	return (i - a);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\r' && str[i] != '\0')
		i++;
	return (i);
}

int space_amount(int i, char *str)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r')
	{
		i++;
	}
	return (i);
}

char *make_word(int i, char *str)
{
	int a;
	int b;
	char *word;

	printf("i is: %d\n", i);
	a = 0;
	b = i;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\r' && str[i] != '\0')
		i++;
	word = malloc(sizeof(char) * (i + 1));
	while (a <= i)
	{
		word[a] = str[b];
		a++;
		b++;
	}
	printf("str: %s\n============\n=============\n", word);
	return (word);
}

char **ft_split_whitespace(char *str)
{
	int 	i;
	int		a;
	char	**ret;
	int		add_to;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ret = (char **)malloc(sizeof(char) * i);
	i = 0;
	while (i < ft_len(str))
	{
		printf("i: %d\n", i);
		ret[a] = make_word(i, str);
		printf("current word: %s\n", ret[a]);
		i += ft_strlen(ret[a]);
		i--;
		i += space_amount(i, str);
		a++;
	}
	ret[a] = NULL;
	return (ret);
}

int main(int argc, char **argv)
{
	char 	**ret;
	int		i;
	int 	a;

	i = 0;
	a = 0;
	if (argc > 1)
	{
		ret = ft_split_whitespace(argv[1]);
		while (ret[i] != NULL)
		{
			printf("ret[%d] = %s\n", i, ret[i]);
			i++;
		}
	}
	free(ret);
	return (0);
}
