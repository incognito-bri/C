int	alpha_num(char	c)
{
	if((c >= 'A' && c <= 'Z') || (c >= 'a' && c<= 'z')
		|| (c >= '1' && c <= '9'))
		return(1);
	else
		return(0);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(i == 0 || !alpha_num(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;

		}
		else if (str[i] >= 'A' & str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}