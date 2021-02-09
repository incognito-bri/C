void	ft_ultimate_div_mod(int	*a,	int	*b)
{
	int tempDiv;

	tempDiv = *a / *b;
	*b = *a % *b;
	*a = tempDiv;
}