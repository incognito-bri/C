int	c_alpha(char	c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(!c_alpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}