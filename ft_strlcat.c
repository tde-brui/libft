/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:01:32 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/11 17:56:31 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int				i;
	unsigned long	j;

	i = 0;
	j = 0;
	while (src[i] && j < (size - ft_strlen(dest) - 1))
	{
		dest[i + ft_strlen(dest)] = src[i];
		i++;
		j++;
	}
	return (i + ft_strlen(dest));
}
