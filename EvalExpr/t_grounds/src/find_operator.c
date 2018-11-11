#include "../includes/headers.h"
#include <stdio.h>

void find_operator(char **argv)
{
	int a = 0;
	int i = 0;
	int start = 0;
	int len;
	int *ptr;
	int arr[255];

	len = ft_strlen(argv[1]);
	while (start < len)
	{
		a = ft_sudo_atoi(argv[1], start);
		start += ft_numlen(a);
		ptr = put_num_to_array(a, arr, i);
		i++;
		//printf("number: %d\n", a);
		start += 2;
	}
	i -= 1;
	while (i >= 0)
	{
		printf("contents: %d\n", *(ptr + i));
		i--;
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '+')
		{
			
		}
		printf("%c\n", argv[1][i]);
		i++;
	}
}
