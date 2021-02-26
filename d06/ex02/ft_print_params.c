void	ft_putchar(char);

void	ft_print_params(char	*param)
{
	int	i;

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

	i = 1;
	while (i < argc)
	{
		ft_print_params(argv[i]);
		i++;
	}
	return (0);
}