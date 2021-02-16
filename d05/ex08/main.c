#include <stdio.h>

char	*ft_strupcase(char	*str);

int	main(int	argc, char	**argv)
{
	if (argc != 2)
	{
		printf("%s\n", "Input a Single String as an Argument");
		return (1);
	}
	printf("%s\n", ft_strupcase(argv[1]));
	return (0);
}