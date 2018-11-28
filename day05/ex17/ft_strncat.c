#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int a;
	char n_str[(ft_strlen(dest) + nb)];
	char *ptr;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
//		printf("i is: %d\n", i);
		n_str[i] = dest[i];
		i++;
	}
	while (a <= nb)
	{
//		printf("i is: %d\n", i);
		n_str[i] = src[a];
		i++;
		a++;
	}
	printf("i\n");
	n_str[i] = '\0';

	ptr = n_str;
	while (i < 80000000)
	{
		i++;
	}
	return (ptr);
}

int	main(void)
{
	char s1[6] = "Hello";
	char s2[12] = " Fourty Two";
	printf("String: %s\n", ft_strncat(s1, s2, 7));
	return (0);
}
