/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:01:28 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/18 16:23:33 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)character)
			return ((char *)&str[i]);
		i++;
	}
	if ((char)character == '\0')
		return ((char *)&str[i]);
	return (0);
}

// int main()
// {
// 	char arr[] = "teste";
// 	printf("%s", ft_strchr(arr, 1024));
// }