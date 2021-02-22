void	ft_putchar(char	c);

void	build(int	x, char	open, char	close, char	body)
{
	int i;

	i = 0;
	if (x > 0)
		ft_putchar(open);
	while (i++ < x - 2)
		ft_putchar(body);
	if (x > 1)
		ft_putchar(close);
	ft_putchar('\n');
}

void	rush04(int	x,int	y)
{
	int	i;

	i = 0;
	if (y > 0)
		build(x, 'A', 'C', 'B');
	while(i < y - 2)
	{
		build(x, 'B', 'B', ' ');
		i++;
	}
	if (y > 1)
	build(x, 'C', 'A', 'B');
}