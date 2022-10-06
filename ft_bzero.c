#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *str, size_t size)
{
	unsigned long				i;
	unsigned char				*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < size)
	{
		ptr[i] = '\0';
		i++;
	}
}

int main()
{
	char arr[] = "I am lorde yayaya";
	ft_bzero(arr, 5);
	printf("%s", arr);
}
