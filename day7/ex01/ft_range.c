/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 09:39:54 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/01 13:15:23 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*int_arr;
	int *nptr;
	int a;
	int total;

	i = 0;
	int_arr = (int *)malloc(sizeof(int_arr) * ((sizeof(int)) + 1));
	nptr = NULL;
	a = min;
	total = (max - min);
	if (!(min >= max))
	{
		while (i < total)
		{
			int_arr[i] = a;
			a++;
			i++;
		}
		return (int_arr);
	}
	return (nptr);
}
