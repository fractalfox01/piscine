#include <stdio.h>
#include "../includes/headers.h"

int	main(int argc, char **argv)
{
	int a = 0;
	int start = 0;
	int len;

	if (argc > 1)
	{
		len = ft_strlen(argv[1]);
		while (start < len)
		{
			a = ft_sudo_atoi(argv[1], start);
			start += ft_numlen(a);
			printf("number: %d\n", a);
			start += 2;
		}
	}
	return (0);
}
