#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char	*str);

int	main(int argc, char	**argv)
{
	if (argc != 2)
	{
		printf("%s\n", "Enter a Number");
		return(1);
	}
	printf("%s%d\n%s%d\n", "atoi: ", atoi(argv[1]), "ft_atoi: ", ft_atoi(argv[1]));
	return(0);
}