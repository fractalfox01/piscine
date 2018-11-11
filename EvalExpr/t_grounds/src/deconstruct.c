#include <stdio.h>
#include "../includes/headers.h"

void    deconstruct(char *str)
{
	int i;
	int a;
	int b;
	int full[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	i = 0;
	a = 0;
	b = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
		{
			full[a] = ft_sudo_atoi(str, i);
			while (str[i] > 47 && str[i] < 58)
			{
				i++;
			}
			a++;
		}
		if (str[i] != '\0')
			i++;
	}
	while (b < a)
	{
		printf("found %d\n", full[b]);
		b++;
	}
}
