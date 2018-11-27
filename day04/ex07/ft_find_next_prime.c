int     ft_is_prime(int nb)
{
        int cd;

        cd = nb - 1;
        if (nb == 1 || nb == 0)
        {
                return (0);
        }
        if ((nb % 2) == 0 && nb != 2)
        {
                return (0);
        }
        while ((nb % cd) > 0)
        {
                cd -= 1;
        }
	if (cd == 1)
	{
		return (1);
	}
        return (0);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
