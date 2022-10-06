int ft_tolower(int a)
{
	if (a < 91 && a > 64)
	{
		return (a + 32);
	}
	else
	{
		return (a);
	}
}