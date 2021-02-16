int	ft_atoi(char	*str)
{
	int	i;
	int negative;
	int	ret;

	negative = 1;
	i = 0;
	ret = 0;

	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while((str[i] >= '0') && (str[i] <= '9'))
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	if (negative == -1)
		return (-ret);
	return (ret);

}