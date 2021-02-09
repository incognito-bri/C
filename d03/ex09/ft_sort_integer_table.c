#include <stdio.h>

void	ft_sort_integer_table(int *tab, int	size)
{
	int count;
	int compare;
	int temp;

	count = 0;
	while (count < size)
	{
		compare = count + 1;
		while(compare < size)
		{
			if (count > compare)
			{
				temp = tab[count];
				tab[count] = tab[compare];
				tab[compare] = temp;
			}
			compare++;
		}
		count++;
	}
	printf("\n%d", tab[1]);
}