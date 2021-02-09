#include <stdio.h>
#include <stdlib.h>

void	ft_sort_integer_table(int *tab, int	size);

int	main(int argc, char	**argv)
{
	int	*table;
	int	i;
	int elements;

	elements = argc - 1;
	table = (int*)malloc(elements * sizeof(int));
	i = 0;
	while (i < argc)
	{
		table[i] = atoi(argv[i]);
		i++;
	}
	i = 1;
	printf("%s", "Original Set: ");
	while(i < argc)
	{
		printf("%d", table[i]);
		if (i < argc - 1)
			printf("%s", ", ");
		i++;
	}
	printf("%s",".\n");
	ft_sort_integer_table(table, argc);
	i = 1;
	printf("%s", "Ordered Set: ");
	while(i < argc)
	{
		printf("%d", table[i]);
		if (i < argc - 1)
			printf("%s", ", ");
		i++;
	}
	printf("%s",".\n");
}