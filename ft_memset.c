/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:01:24 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/06 11:03:33 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
