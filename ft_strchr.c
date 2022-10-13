/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:01:28 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/11 18:20:18 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int character)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (ptr[i])
	{
		if (ptr[i] == character)
			return (&ptr[i]);
		i++;
	}
	if (character == '\0')
		return (&ptr[i]);
	return (0);
}

// int main()
// {
// 	char arr[] = "Tij\0men";
// 	printf("%s", ft_strchr(arr, '\0'));
// }