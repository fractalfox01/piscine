int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str > 64 && *str < 91)
			str++;
		else
			return (0);
	}
	return (1);
}
