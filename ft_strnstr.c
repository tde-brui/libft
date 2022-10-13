/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 16:29:22 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/11 15:07:35 by tde-brui      ########   odam.nl         */
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
	char	*ptr1;
	char	*ptr2;

	i = 0;
	ptr1 = (char *)str1;
	ptr2 = (char *)str2;
	if (ptr2[i] == 0)
	{
		return (ptr1);
	}
	if (size != 0)
	{
		while (str1[i])
		{
			j = 0;
			if (str1[i] == str2[j])
			{
				ptr = &ptr1[i];
				while (str1[i] == str2[j] && i < size)
				{
					j++;
					i++;
					if (str2[j] == '\0')
						return (ptr);
				}
			}
			i++;
		}
	}
	return (0);
}

// int main()
// {
// 	char arr1[] = "Ik wil deze string vinden";
// 	char arr2[] = "";
// 	printf("%s", ft_strnstr(arr1, arr2, 17));
// }