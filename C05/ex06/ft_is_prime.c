int	ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i < nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}
