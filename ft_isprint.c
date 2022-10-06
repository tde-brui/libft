int ft_isprint(int a)
{
	if (a < 128 && a > 31)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
