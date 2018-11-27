int	ft_atoi(char *str)
{
	int	i;
	int	direction;
	int	nbr;

	i = 0;
	direction = 1;
	nbr = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n')
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			direction *= -1;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		nbr = nbr * 10 + (*str++ - 48);
	}
	return (nbr * direction);
}
