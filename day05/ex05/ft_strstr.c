/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:04:32 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/30 18:39:52 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		a;
	int		b;

	i = 0;
	while (str[i] != '\0')
	{
		a = 0;
		if (str[i] == to_find[a])
		{
			b = i;
			while (str[b] == to_find[a])
			{
				if (to_find[a + 1] == '\0')
					return (&str[i]);
				b++;
				a++;
			}
		}
		i++;
	}
	return (0);
}
