/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 13:25:15 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/26 23:40:06 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int string_length;
	int counter;

	counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}
	while (counter < string_length)
	{
		ft_putchar(str[counter]);
		counter++;
	}
}
