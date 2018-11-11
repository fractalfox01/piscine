/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 13:21:45 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/01 17:03:59 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*int_arr;

	i = 0;
	int_arr = (int *)malloc((sizeof(int) * ((max - min) + 1)));
	if (!(min >= max))
	{
		while (i < (max - min))
		{
			int_arr[i] = min + i;
			i++;
		}
	}
	else
	{
		*range = NULL;
		return (0);
	}
	int_arr[i] = '\0';
	*range = int_arr;
	return (i);
}
