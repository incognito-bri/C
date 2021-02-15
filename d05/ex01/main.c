#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int	nb);

int	main(int	argc, char**	argv)
{
	int	nbr;
	printf("%s\n", "Enter an Integer: ");
	scanf("%d", &nbr);
	ft_putnbr(nbr);
	putchar('\n');
	return (0);
}