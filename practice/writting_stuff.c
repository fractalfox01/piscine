/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writting_stuff.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 08:05:23 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/05 08:41:35 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_getlen(char *word)
{
	int	i;

	i = 0;
	while(word[i] != '\0')
		i++;
	return (i);
}

void	ft_putword(char *word)
{
	int size;

	size = ft_getlen(word);
	write(1, &word, size);
}

int		main()
{
	char *str;
	char *nl;

	str = "Hello World!";
	nl = "\n";
	ft_putword(str);
	ft_putword(nl);
	return (0);
}
