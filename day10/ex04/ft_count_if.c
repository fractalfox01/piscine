/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:02:18 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/05 19:11:59 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}
