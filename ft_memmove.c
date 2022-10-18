/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:01:22 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/15 17:54:55 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned long	j;
	char			*ptrsrc;
	char			*ptrdest;

	j = num;
	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	if (src == 0 && dest == 0)
		return (0);
	if (dest > src)
	{
		while (j-- > 0)
			ptrdest[j] = ptrsrc[j];
	}
	else
	{
		j = 0;
		while (j < num)
		{
			ptrdest[j] = ptrsrc[j];
			j++;
		}
	}
	return (dest);
}

// int main()
// {
// 	char arr1[] = "";
// 	char arr2[] = "";
// 	printf("%s", ft_memmove(arr1, arr2, 2));
// }