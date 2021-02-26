void	ft_putchar(char	c);

void	ft_rev_params(char	*param)
{
	int i;

	i = 0;
	while (param[i])
	{
		ft_putchar(param[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int	argc, char	**argv)
{
	int i;

	i = argc - 1;
	while (i > 0)
	{
		ft_rev_params(argv[i]);
		i--;
	}
	return (0);
}