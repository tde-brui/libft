int	ft_isalpha(int a)
{
	if ((a < 91 && a > 64) || (a < 123 && a > 96))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
