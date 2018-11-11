/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 22:09:20 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/07 15:02:35 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list		*list;
	t_list		*begin_list;
	int			i;

	i = ac;
	if (i >= 0)
	{
		begin_list = ft_create_elem(av[i]);
		list = begin_list;
		i--;
		while (i < ac)
		{
			list->next = ft_create_elem(av[i]);
			list = list->next;
			i--;
		}
		return (begin_list);
	}
	return (0);
}
