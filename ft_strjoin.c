/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 16:04:53 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/18 15:08:51 by tde-brui      ########   odam.nl         */
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
	int		k;

	i = 0;
	j = 0;
	k = ft_strlen(str1) + ft_strlen(str2) + 1;
	ptr = malloc((sizeof(char) * k));
	if (ptr == 0)
		return (ptr);
	while (str1[i])
	{
		ptr[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		ptr[i + j] = str2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}

// int main()
// {
// 	char arr1[] = "";
// 	char arr2[] = "dolor sit amet";
// 	printf("%s", ft_strjoin(arr1, arr2));
// }
