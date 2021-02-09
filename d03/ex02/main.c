#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int	*a, int	*b);

int		main(void)
{
	int a;
	int	b;

	a = 1;
	b = 2;
	printf("%s%d %s%d \n", "a: ", a, "b: ", b);
	ft_swap(&a, &b);
	printf("%s%s%d %s%d \n", "ft_swapped: ", "a: ", a, "b: ", b);

	return(0);
}