int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if((*str > 64 && *str < 91) || (*str > 96 && *str < 123))
			str++;
		else
			return (0);
	}
	return (1);
}
