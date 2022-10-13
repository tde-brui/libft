/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 15:01:21 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/07 13:51:13 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memchr(const void *ptr, int value, size_t size)
{
	unsigned long	i;
	char			*ptr1;

	i = 0;
	ptr1 = (char *)ptr;
	while (i < size)
	{
		if (ptr1[i] == value)
		{
			return (&ptr1[i]);
		}
		i++;
	}
	return (0);
}
