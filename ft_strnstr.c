/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 16:29:22 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/18 16:27:33 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strnstr(const char *str1, const char *str2, size_t size)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	if (*str2 == '\0')
		return ((char *)str1);
	while (str1[i] && i < size)
	{
		j = 0;
		if (str1[i] == str2[j])
		{
			ptr = (char *)&str1[i];
			while (str2[j] != '\0' && str2[j] == str1[i] && i < size)
			{
				j++;
				i++;
			}
			if (str2[j] == '\0')
				return ((char *)ptr);
		}
		else
			i++;
	}
	return (0);
}

// int main()
// {
// 	char arr1[] = "lorem ipsum dolor sit amet";
// 	char arr2[] = "dolor";
// 	printf("%s", ft_strnstr(arr1, arr2, -1));
// }