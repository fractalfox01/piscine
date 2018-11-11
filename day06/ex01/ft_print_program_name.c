/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 10:46:11 by tvandivi          #+#    #+#             */
/*   Updated: 2018/10/31 23:12:57 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(int argc, char **argv)
{
	int		i;
	char	str;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i] != '\0')
		{
			str = argv[0][i];
			ft_putchar(str);
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	ft_print_program_name(argc, argv);
	ft_putchar('\n');
	return (0);
}
