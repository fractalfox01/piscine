/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 16:04:51 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/31 22:58:29 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_rev_params(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		i = argc - 1;
		while (i > 0)
		{
			ft_rev_params(argv[i]);
			i--;
		}
	}
	return (0);
}
