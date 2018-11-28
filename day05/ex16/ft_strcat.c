char	*ft_strcat(char *dest, char *src)
{
	int i;
	char *ptr;

	i = 0;
	ptr = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
