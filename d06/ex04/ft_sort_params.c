#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while(s1[i] && s1[i] == s2[i])
		i++;
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	print_params(char	*av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		putchar(av[i]);
		i++;
	}
	putchar('\n');
}

int		main(int	argc, char	**argv)
{
	int		count;
	int		compare;
	char	*tmp;

	count = 1;

	while (count < argc)
	{
		compare = count + 1;
		while (compare < argc)
		{
			if (ft_strcmp(argv[count], argv[compare]) > 1)
			{
				tmp = argv[count];
				argv[count] = argv[compare];
				argv[compare] = tmp;
			}
			compare++;
		}
		count++;
	}
	count = 1;
	while (count < argc)
	{
		print_params(argv[count]);
		count++;
	}
	return (0);
}