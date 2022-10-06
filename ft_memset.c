#include <stdio.h>
#include <stddef.h>
#include <string.h>

void	*ft_memset(void *str, int val, size_t size)
{
	unsigned long		i;
	unsigned char		*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < size)
	{
		ptr[i] = val;
		i++;
	}
	return (str);
}

int main()
{
	char arr1[] = "daniel is wack";
	memset(arr1, 100, 6);
	printf("%s", arr1);
}
