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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int a;
	char n_str[(ft_strlen(dest) + ft_strlen(src)) - 1];
	char *ptr;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		n_str[i] = dest[i];
		i++;
	}
	while (src[a] != '\0')
	{
		n_str[i] = src[a];
		i++;
		a++;
	}
	n_str[i] = '\0';

	ptr = n_str;
	return (ptr);
}
