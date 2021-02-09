#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)

int	main(int argc, char	**argv)
{
	int nb;

	if (argc != 2)
	{
		printf("%s", "Enter a Single Integer\n");
		return(1);
	}
	nb = atoi(argv[1]);
	if (ft_recursive_factorial(nb) == 0)
	{
		printf("%s", "Error\n");
		return(1);
	}
	printf("%d%s%d\n", nb, "! is equal to: ", ft_recursive_factorial(nb));
}