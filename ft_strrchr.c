char *ft_strrchr(const char *str, int a)
{
	int			i;
	const char	*ptr;
	char	*ptr1;

	i = 0;
	while (str[i])
	{
		i++;
	}
	while (str[i])
	{
		if (str[i] == a)
		{
			ptr = &str[i];
			ptr1 = (char *)ptr;
			return (ptr);
		}
		i--;
	}
	return (0);
}