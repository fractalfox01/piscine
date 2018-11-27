#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}
/*
void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}
*/
int	get_length(char *str)
{
	int i = 0;
	while (str[i] != '0')
	{
		i++;
	}
	return (i);
}
/*
void    to_base64(char *str)
{
	
}
*/
int	ft_atoi(char c)
{
	int fin = 0;
	fin = fin * 10 + (c);
	return (fin);
}

char	to_binary(int nbr)
{
	int bin = 0;
	printf("Number: %d\n", nbr);
	if ((nbr / 2) > 0)
	{
		to_binary(nbr / 2);
	}
	return ((char)((nbr % 2) + 48));
}

int     main(int argc, char **argv)
{
	char str[6] = "Hello";
	int i = 0;
	char **full;
	if (argc == 1)
	{
		full = malloc(sizeof(char *) * (get_length(str) + 1));
		while (str[i] != '\0')
		{
			full[i] = to_binary(ft_atoi(str[i]));
			i++;
		}
	}
/*	if (argc == 2)
	{
		to_binary(ft_atoi(argv[1]));
	}*/
	ft_putchar('\n');
        return (0);
}

