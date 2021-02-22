#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char	c);

void	rush04(int	x,int	y);

int		main(int	argc, char	**argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Enter an X and a Y value.");
		return(1);
	}
	rush04(atoi(argv[1]), atoi(argv[2]));
	return (0);
}