/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:30:24 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/30 20:22:03 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && i < n && s1 != '\0' && s2[i] != '\0')
	{
		printf("s1[i]:%d vs s2[i]:%d\n ", s1[i], s2[i]);
		i++;
	}
	printf("s1[i]:%d vs s2[i]:%d\nResult: ", s1[i], s2[i]);
	if (s1[i] < s2[i])
		return (-1);
	if (s1[i] > s2[i])
		return (1);
	return (0);
}
