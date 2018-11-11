/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 21:56:59 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/31 23:25:24 by tvandivi         ###   ########.fr       */
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

void	ft_swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort_params(char **args, int argc)
{
	int	i;
	int a;

	i = 1;
	a = 1;
	while (i < argc)
	{
		while (a < argc)
		{
			if (args[i][0] > args[a][0])
				ft_swap(&args[i], &args[a]);
			a++;
		}
		i++;
		a = 1;
	}
	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(args[i]);
		ft_putchar('\n');
		i--;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(argv, argc);
	}
	return (0);
}
