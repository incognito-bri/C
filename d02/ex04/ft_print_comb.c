#include <stdio.h>

void	ft_print_numbers(char nbr1, char nbr2, char nbr3)
{
	putchar(nbr1);
	putchar(nbr2);
	putchar(nbr3);
	if (!(nbr1 == '7' && nbr2 == '8' && nbr3 == '9'))
	{
		putchar(',');
		putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	nbr1;
	char	nbr2;
	char	nbr3;

	nbr1 = '0';
	nbr2 = '0';
	nbr3 = '0';

		
	while(nbr1 <= '9')
	{
		nbr2 = nbr1 + 1;
		while(nbr2 <= '9')
		{	
			nbr3 = nbr2 + 1;
			while (nbr3 <= '9')
			{
				ft_print_numbers(nbr1, nbr2, nbr3);
				nbr3++;
			}
			nbr2++;
		}
		nbr1++;
	}
}


int		main(void)
{
	ft_print_comb();
	return(0);
}
