/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:01:18 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/11 16:39:18 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
	if (ptr == 0 && ptr1 == 0)
		return (0);
	while (i < size)
	{
		ptr1[i] = ptr[i];
		i++;
	}
	return (dest);
}
