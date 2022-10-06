#include <stdlib.h>

void	*memmove(void *dest, const void *src, size_t num)
{
	unsigned long	i;
	char			*ptrsrc;
	char			*ptrdest;

	i = 0;
	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	while (i < num)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dest);
}
