/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:56:15 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/08 21:59:23 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

int	ft_display_file(char *f_name)
{
	int		fd;
	int		res;
	char	buf[BUF_SIZE];

	fd = open(f_name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Open() Error.\n", 15);
		return (1);
	}
	res = read(fd, &buf, BUF_SIZE);
	if (res > 0)
	{
		write(1, &buf, res);
	}
	if (close(fd) < 0)
	{
		write(1, "Close() Error.\n", 16);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "File name missing.\n", 20);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 21);
	}
	else
	{
		ft_display_file(argv[1]);
	}
	return (0);
}
