#include <stdio.h>

char	*ft_strrev(char	*str);

int	main(int	argc, char	**argv)
{
	if (argc != 2)
	{
		printf("%s", "Please Enter a Single String\n");
		return (1);
	}
	ft_strrev(argv[1]);
	printf("%s\n", argv[1]);
}