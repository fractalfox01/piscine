#include <stdio.h>

void ft_putchar(char c);
int ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	char	error[]  = "Warning: Two Arguments Required.";
	int		i;

	i = 0;
	if(argc == 3)
	{
		printf("%d\n",ft_strcmp(argv[1], argv[2]));
	}
	else
	{
		while (error[i] != '\0')
		{
			ft_putchar(error[i]);
			i++;
		}
		ft_putchar('\n');
		ft_putchar('\n');
	}
	return (0);
}
