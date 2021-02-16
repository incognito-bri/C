#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcpy(char	*dest, char	*src);

int	main(int	argc, char	**argv)
{
	char	*dest;
	char	*src;

	if (argc != 2)
	{
		printf("%s\n", "Enter a Single Character String as a Parameter ");
		return (1);
	}
	src = argv[1];
	dest = (char *)malloc(strlen(argv[1]));
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}