#include <stdio.h>

void	ft_putstr(char	*str)
{
	int i;

	i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
}