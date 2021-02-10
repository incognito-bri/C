#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int	nb, int	power);

int	main(int argc, char	**argv)
{
	int nb;
	int	power;

	if (argc != 3)
	{
		printf("%s\n", "Please Enter an Integer Value To Be Raised to Another Integer Value");
		return(1);
	}
	nb = atoi(argv[1]);
	power = atoi(argv[2]);
	printf("%s%d\n", "nbr1 raised to the nbr2 power is: ", ft_recursive_power(nb, power));
	return(0);
}