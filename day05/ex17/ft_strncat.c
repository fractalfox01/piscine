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
	char *ptr;

	i = 0;
	ptr = dest;
	while (*dest)
	{
		dest++;
	}
	while (i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (ptr);
}
