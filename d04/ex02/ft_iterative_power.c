int	ft_iterative_power(int	nb, int	power)
{
	if (power < 0)
		return(0);
	while(power > 1)
	{
		nb *= nb;
		power--;
	}
	return(nb);
}