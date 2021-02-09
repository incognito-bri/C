int	ft_iterative_factorial(int	nb)
{
	int n;

	if(nb < 0 || nb > 12)
		return(0);
	n = nb - 1;
	if (nb == 0)
		return(1);
	while (n > 1)
	{
		nb *= n;
		n--;
	}
	return(nb);
}