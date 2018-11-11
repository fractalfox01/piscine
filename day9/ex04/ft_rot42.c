/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 15:24:50 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/02 16:29:50 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rotator_a(char i)
{
	int	a;

	a = 0;
	while (a < 42)
	{
		i++;
		a++;
		if (i == 91)
			i = 65;
	}
	return (i);
}

char	rotator_b(char i)
{
	int a;

	a = 0;
	while (a < 42)
	{
		i++;
		a++;
		if (i == 123)
			i = 97;
	}
	return (i);
}

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = rotator_a(str[i]);
		else if (str[i] > 96 && str[i] < 123)
			str[i] = rotator_b(str[i]);
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
