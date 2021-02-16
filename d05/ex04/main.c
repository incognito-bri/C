#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n);

int	main(int	argc, char	**argv)
{
	char	*dest;
	char	*src;

	if (argc != 3)
	{
		printf("%s\n", "Enter a Single Character String as a Parameter and Int Value for ft_strncpy: ");
		return (1);
	}
	src = argv[1];
	dest = (char *)malloc(strlen(argv[1]));
	ft_strncpy(dest, src, atoi(argv[2]));
	printf("%s\n", dest);
	return (0);
}