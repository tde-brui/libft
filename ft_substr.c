/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 14:06:07 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/11 17:10:25 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t				i;
	size_t				j;
	unsigned int		k;
	char				*ptr;

	i = 0;
	j = 0;
	k = 0;
	while (str[k])
		k++;
	ptr = malloc(len + 1);
	if (ptr == 0)
		return (0);
	if (start >= k)
		return (ptr);
	while (str[start + i] != '\0' && i < len)
	{
		ptr[j] = str[start + i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

// int main()
// {
// 	char arr[] = "Tijmen";
// 	printf("%s", ft_substr(arr, 5, 2));
// }