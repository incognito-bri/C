char	*ft_strstr(char	*str, char	*to_find)
{
	int i;
	int n;

	if (!*to_find)
		return(str);
	i = 0;
	while (str[i])
	{
		n = 0;
		if(to_find[n] == str[i])
		{
			while(to_find[n] && str[i + n] && to_find[n] == str[n + i])
				n++;

			if (to_find[n] == '\0')
				return(&str[i]);
		}
		i++;
	}
	return(0);
}