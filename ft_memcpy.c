#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned long	i;
	char			*ptr;
	char			*ptr1;

	i = 0;
	ptr = (char *)src;
	ptr1 = (char *)dest;
	while (i < size)
	{
		ptr1[i] = ptr[i];
		i++;
	}
	return (dest);
}

int main()
{
	char arr1[] = "wakka smakka";
	char arr2[] =  "rapanda";
	ft_memcpy(arr2, arr1, 8);
	printf("%s", arr2);
}