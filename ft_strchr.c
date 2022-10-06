#include <stdio.h>
#include <string.h>

const char	*ft_strchr(const char *str, int character)
{
	int			i;
	const char	*ptr;

	i = 0;
	while (str[i])
	{
		if (str[i] == character)
		{
			ptr = &str[i];
			return (ptr);
		}
		i++;
	}
	return (0);
}

int main()
{
	char arr[] = "Ik ben tijmen en dit is een string";
	printf("%s", strchr(arr, 'x'));
}
