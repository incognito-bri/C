#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char	*str);

int	main(int	argc, char	**argv)
{
	if (argc != 2)
	{
		printf("%s\n", "Enter a Single Integer Parameter");
		return (1);
	}
	printf("%s%d\n", "ft_atoi: ", ft_atoi(argv[1]));
	printf("%s%d\n", "atoi: ", atoi(argv[1]));
	return (0);
}