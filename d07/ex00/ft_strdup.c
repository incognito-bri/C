#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	int		len;
	char	*duplicate;

	len = 0;
	while (src[len])
		len++;
	duplicate = (char*)malloc(sizeof(char) * (len + 1));
	len = 0;
	while(src[len])
	{
		duplicate[len] = src[len];
		len++;
	}
	duplicate[len] = '\0';
	return (duplicate);
}