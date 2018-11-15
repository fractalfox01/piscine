/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 19:38:07 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/14 20:10:43 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int i;
	int a;
	int tmp;

	i = 0;
	tmp = 0;
	a = 1;
	while (i < len)
	{
		while (a < len)
		{
			if (tab[i] < tab[a])
			{
				tmp = tab[i];
				tab[i] = tab[a];
				tab[a] = tmp;	
			}
			a++;
		}
		a = 0;
		i++;
	}
	printf("Largest: %d\n", tab[len - 1]);
	printf("smallest: %d\n", tab[0]);
	return (tab[len - 1]);
}

int		main(void)
{
	int arr[10] = {5,8,43,2,45,23,86,53,21,12};
	max(arr, 10);
	return (0);
}
