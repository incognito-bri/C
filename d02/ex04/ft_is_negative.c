#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		putchar('P');
	else
		putchar('N');
	putchar('\n');
}