char	*ft_strrev(char	*str)
{
	int	index;
	int	count;
	char temp;

	count = 0;
	index = 0;
	while (str[index])
		index++;
	while (count < index - 1)
	{
		temp = str[index - 1];
		str[index - 1] = str[count];
		str[count] = temp;
		count++;
		index--;
	}
	return(str);
}