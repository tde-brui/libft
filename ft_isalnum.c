#include <stdio.h>

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

int	ft_isdigit(int a)
{
	int	i;

	i = 0;
	if (a > 47 && a < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_isalnum(int a)
{
	if ((ft_isalpha(a) != 0) || (ft_isdigit(a) != 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
