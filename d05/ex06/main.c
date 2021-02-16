#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strcmp(char	*s1, char	*s2);

int	main(int	argc, char	**argv)
{
	printf("%s%d\n", "ft_strcmp: ", ft_strcmp(argv[1], argv[2]));
	printf("%s%d\n", "strcmp: ", strcmp(argv[1], argv[2]));
	return (0);
}