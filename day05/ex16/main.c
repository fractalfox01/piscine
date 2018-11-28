#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[6] = "Hello";
	char src[7] = " World";
	printf("%s\n", ft_strcat(dest, src));	
	return (0);
}
