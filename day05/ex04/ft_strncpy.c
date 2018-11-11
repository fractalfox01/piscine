/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 12:04:14 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/30 18:40:39 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (src[i] == '\0')
		{
			dest[i] = '\0';
			break ;
		}
		dest[i] = src[i];
		i++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
