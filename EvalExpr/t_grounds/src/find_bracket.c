#include <stdio.h>
void	find_bracket(char *str)
{
	int i, start, end;
	char num[255];
	
	start = 0;
	end = 0;
	while (str[i] != '\0')
		i++;
	end = i;
	while (str[start] != '(' && str[start] != '\0')
		start++;
	while (str[end] != ')' && end > 0)
		end--;
	i = 0;
	start++;
	while (start < end)
	{
		num[i] = str[start];
		start++;
		i++;
	}
	printf("expression found: %s\n", num);
}
