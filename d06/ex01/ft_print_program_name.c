void	ft_putchar(char	c);

void	ft_print_program_name(char	*str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int	argc, char	**argv)
{
	(void)argc;
	ft_print_program_name(argv[0]);
	return (0);
}