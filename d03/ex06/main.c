#include <stdio.h>

int	ft_strlen(char	*str);

int	main(int	argc, char	**argv)
{
	if (argc != 2)
	{
		printf("%s", "Please Enter a Single String\n");
		return (1);
	}
	printf("String is %d characters long.\n", ft_strlen(argv[1]));
}