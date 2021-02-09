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
	while(i < argc)
	{
		printf("%s%d%s%d\n", "table number", i, " : ", table[i]);
		i++;
	}
	ft_sort_integer_table(table, argc);
	i = 1;
	while(i < argc)
	{
		printf("%s%d%s%d\n", "table number", i, " : ", table[i]);
		i++;
	}
}