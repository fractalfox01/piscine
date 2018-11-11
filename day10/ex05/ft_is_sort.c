/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 19:13:34 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/06 11:56:05 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int	pos;
	int neg;
	int eq;

	i = 0;
	pos = 1;
	neg = 1;
	eq = 1;
	while (i < length)
	{
		if ((i + 1) == length)
			break ;
		if (f(tab[i], tab[i + 1]) < 0)
			pos++;
		if (f(tab[i], tab[i + 1]) > 0)
			neg++;
		if (f(tab[i], tab[i + 1]) == 0)
			eq++;
		i++;
	}
	if (length == 0 || pos == length || eq == length)
		return (1);
	return (0);
}
