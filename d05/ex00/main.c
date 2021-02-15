#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char	*str);

int	main(int argc, char	**argv)
{
	if (argc != 2)
	{
		printf("%s\n", "Input a Character string");
		return (1);
	}
	ft_putstr(argv[1]);
	putchar('\n');
	return(0);
}