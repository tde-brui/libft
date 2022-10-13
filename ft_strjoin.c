/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 16:04:53 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/11 16:40:13 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ptr = malloc(ft_strlen((str1) + ft_strlen(str2)) + 1);
	if (ptr == 0)
		return (ptr);
	if (str1 == 0)
		return (0);
	while (str1[i])
	{
		ptr[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		ptr[i] = str2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main()
// {
// 	char arr1[] = "tijmen";
// 	char arr2[] = " = legend";
// 	printf("%s", ft_strjoin(arr1, arr2));
// }
