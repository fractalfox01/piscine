int	count_brackets(char *str)
{
	int		i;
	int		a;
	char	arr[255];

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '(' || str[i] == ')')
		{
			arr[a] = i;
			a++;
		}
		i++;
	}
	return (a);
}
