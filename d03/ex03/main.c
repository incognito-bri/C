 #include <stdlib.h>
#include <stdio.h>

void	ft_div_mod(int	a, int	b, int	*div, int	*mod);

int	main(int	argc, char	*argv[])
{
	int	*div;
	int	*mod;

	if (argc != 3)
	{
		printf("%s\n", "Please Enter Two Whole Numbers");
		return (1);
	}
	div = (int*)malloc(sizeof(int));
	mod = (int*)malloc(sizeof(int));
	ft_div_mod(atoi(argv[1]), atoi(argv[2]), div, mod);
	printf("%s%d\n%s%d\n", "a / b: ", *div, "a % b: ", *mod);
	return (0);

}