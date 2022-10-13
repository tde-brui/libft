/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:00:43 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/06 11:02:20 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
