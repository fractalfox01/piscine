int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str > 47 && *str < 58)
			str++;
		else
			return (0);
	}
	return (1);
}
