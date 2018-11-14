/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 08:35:31 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/14 15:11:59 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		total_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*get_word(char *str, int start)
{
	int i;
	int a;
	int b;
	char *word;

	i = 0;
	a = 0;
	b = start;
	while (str[start] != ' ' && str[start] != '\t' && str[start] != '\r' && str[start] != '\0')
	{
		start++;
		i++;
	}
	word = (char *)malloc(sizeof(char*) * (i + 1));
	while (a < i)
	{
		word[a] = str[b];
		a++;
		b++;
	}
	word[a] = '\0';
	return (word);
}

char **ft_split_whitespaces(char *str)
{
	int		i;
	int		a;
	int 	len;
	char 	**ret;
	char	*end;

	i = 0;
	a = 0;
	len = total_len(str);
	ret = (char **)malloc(sizeof(char*) * (len + 1));
	while (i < len)
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r')
			i++;
		ret[a] = get_word(str, i);
		i += total_len(ret[a]);
		a++;
	}
	ret[a] = NULL;
	return (ret);
}

int		main(int argc, char **argv)
{
	int	i;
	char	**ret;
	
	i = 0;
	if (argc > 1)
	{
		ret = ft_split_whitespaces(argv[1]);
		while (ret[i])
		{
			ft_putstr(ret[i]);
			ft_putchar('\n');
			i++;
		}
		free(ret);
	}
	return (0);
}
