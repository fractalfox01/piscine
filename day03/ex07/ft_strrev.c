/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 22:31:08 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/26 23:20:40 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		a;
	char	*temp[i];

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	while(a < i)
	{
		temp[i-1] = str[a];
		i--;
	}
	return (temp);
}

int		main(void)
{
	char str[] = "Hello world";
	printf("%s\n", ft_strrev(str));
	return (0);
}
