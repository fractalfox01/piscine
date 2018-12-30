#include <stdio.h>
#include <string.h>

unsigned	 int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int a;
	char *ptr;

	i = 0;
	a = 0;
	ptr = dest;
	while (*dest)
	{
		dest++;
		i++;
	}
	while (a < size)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
		a++;
	}
	*dest = '\0';
	i++;
	printf("%lu\n", sizeof(dest) + size);
	return (i);
}

int	main(void)
{
	char s1[6] = "Hello";
	char s2[7] = " World";
	printf("my Size: %lu\n", ft_strlcat(s1, s2, 4));
	printf("their Size: %lu\n", strlcat(s1, s2, 4));

	return (0);
}
