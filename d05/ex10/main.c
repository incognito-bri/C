#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char	*str);

int	main(int	argc, char	**argv)
{
	if (argc != 2)
	{
		printf("%s\n", "Enter Single String To Be Capitalized As Argument");
		return (1);
	}
	printf("%s\n", ft_strcapitalize(argv[1]));
	return (0);
}