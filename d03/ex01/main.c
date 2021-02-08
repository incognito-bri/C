#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_ft(int	*********nbr);

int		main(void)
{
	int nbr1;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********nbr;

	ptr1 = &nbr1;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	nbr = &ptr8;
	ft_ultimate_ft(nbr);
	printf("%d\n", *********nbr);
	return(0);
}