#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int	nb);

int	main(int	argc, char	**argv)
{
	//int	nb;

	if (argc != 2)
	{
		printf("%s\n", "Enter a single Integer for which to calculate the square root");
		return(0);
	}
	if (ft_sqrt(atoi(argv[1])) == -1 || ft_sqrt(atoi(argv[1])) == 0)
	{
		printf("%s\n", "Error");
		return(1);
	}
	printf("%s%s%s%d\n", "The square root for: ", argv[1], " is: ", ft_sqrt(atoi(argv[1])));
	return (0);
}