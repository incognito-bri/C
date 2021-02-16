#include <stdio.h>

int	ft_str_is_alpha(char	*str);

int	main(void)
{
	char	str[100];

	printf("%s\n", "Enter a String to Be Checked for only Alphabetic Characters:");
	scanf("%s", str);
	printf("%s\n", str);
	if (ft_str_is_alpha(str))
		printf("%s\n", "String Consists of Alphabetic Characters.");
	else
		printf("%s\n", "String Contains Non - Alphabetic Characters");
	return (0);
}