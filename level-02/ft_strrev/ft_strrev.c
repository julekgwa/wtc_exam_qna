char	*ft_strrev(char *str)
{
	int	i;
	int	l;
	char	tmp;

	while (str[l])
		l++;
	l -= 1;
	i = 0;
	while (i < l)
	{
		tmp = str[i];
		str[i] = str[l];
		str[l] = tmp;
		i++;
		l--;
	}
	return (str);
}
