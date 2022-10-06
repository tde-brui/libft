#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned long	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (j < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int main()
{
	char arr1[] = "wooh uuh";
	char arr2[] = "yeah";
	strlcat(arr1, arr2, 4);
	printf("%s", arr1);
}
