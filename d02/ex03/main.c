#include <stdlib.h>

void	ft_is_negative(int n);

int		main(int argc, char	*argv[])
{
	int	i;

	if (argc != 2)
		return(1);
	i = atoi(argv[1]);
	ft_is_negative(i
		);
	return(0);
}