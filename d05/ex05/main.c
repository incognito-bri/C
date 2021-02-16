#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char	*str, char	*to_find);

int	main(int	argc, char	**argv)
{
	printf("%s\n", "Testing ft_strstr, Enter String to be Searched in for Needle: ");
	//	return(1);
	printf("%s\n%s\n", "Result for ft_strstr is: ", ft_strstr(argv[1], argv[2]));
	printf("%s\n%s\n", "Result for strstr is: ", strstr(argv[1],argv[2]));
	return (0);
}