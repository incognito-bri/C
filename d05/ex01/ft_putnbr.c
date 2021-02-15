#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int	nb)
{
	if (nb < 0)
	{
		putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		putchar('0' + nb);
}