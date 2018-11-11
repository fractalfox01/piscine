#include <stdlib.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);

#define	LEN		21

int	main(void)
{
	int		i;
	char	*str;

	str = (char*)malloc(sizeof(*str) * LEN + 1);
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
