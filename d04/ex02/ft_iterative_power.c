int	ft_iterative_power(int	nb, int	power)
{
	int ret;

	ret = nb;
	if (power < 0)
		return(0);
	while(power > 1)
	{
		ret *= nb;
		power--;
	}
	return(ret);
}