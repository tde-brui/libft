#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned long	i;
	int				j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	while (src[j])
	{
		j++;
	}
	return (j);
}

int main()
{
	char arr1[] = "I am lorde yayaya";
	char arr2[] = "Lorem epsum imus";
	strlcpy(arr2, arr1, 5);
	printf("%s", arr2);
}
