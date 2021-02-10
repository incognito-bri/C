int	ft_sqrt(int	nb)
{
	int	i;
	int limit;

	i = 0;
	if (nb == 1)
		return (1);
	limit = nb / 2;
	if(nb > 2147395600)
		return(-1);
	while(i <= limit)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return(0);
}