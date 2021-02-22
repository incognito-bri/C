void	ft_putchar(char	c);

void	build(int	x, char	ends, char	body)
{
	int i;

	i = 0;
	if (x > 0)
		ft_putchar(ends);
	while (i++ < x - 2)
		ft_putchar(body);
	if (x > 1)
		ft_putchar(ends);
	ft_putchar('\n');
}

void	rush00(int	x,int	y)
{
	int	i;

	i = 0;
	if (y > 0)
		build(x, 'o', '-');
	while(i < y - 2)
	{
		build(x, '|', ' ');
		i++;
	}
	if (y > 1)
	build(x, 'o', '-');
}