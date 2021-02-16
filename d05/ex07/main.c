#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n);

int	main(int	argc, char	**argv)
{
	printf("%s%d\n", "ft_strncmp: ", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("%s%d\n", "strncmp: ", strncmp(argv[1], argv[2], atoi(argv[3])));
	return(0);
}