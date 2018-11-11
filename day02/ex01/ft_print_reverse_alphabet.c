/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 09:11:11 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/25 14:10:05 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	char	character_to_print;
	int		current_count;

	character_to_print = 'z';
	current_count = 26;
	while (current_count != 0)
	{
		ft_putchar(character_to_print);
		character_to_print -= 1;
		current_count -= 1;
	}
}
