#include <stdlib.h>
#include <stdio.h>

int	ft_fibonacci(int	index);

int	main(int argc, char	**argv)
{
	int	res;

	if (argc != 2)
	{
		printf("%s\n", "Enter An Index for Which you want the fibonacci Value for");
		return (1);
	}
	res = atoi(argv[1]);
	if (ft_fibonacci(res) == -1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%s%s%s%d\n", "The ", argv[1], "th fibonacci sequence is: ", ft_fibonacci(res));
	return(0);
}