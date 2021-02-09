 #include <stdlib.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int	*a,	int	*b);

int	main(int	argc, char	*argv[])
{
	int a;
	int	b;

	if (argc != 3)
	{
		printf("%s\n", "Please Enter Two Whole Numbers");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	ft_ultimate_div_mod(&a, &b);
	printf("%s%d\n%s%d\n", "a / b: ", a, "a % b: ", b);
	return (0);

}