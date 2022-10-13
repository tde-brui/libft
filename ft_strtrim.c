/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 16:23:42 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/12 18:42:19 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

// static int	ft_start(const char *str, const char *set)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (set[j])
// 	{
// 		if (set[j] == str[i])
// 		{
// 			i++;
// 			j = 0;
// 		}
// 		j++;
// 	}
// 	return (i);
// }

static int	ft_end(const char *str, const char *set)
{
	int	i;
	int	j;
	int	k;

	i = ft_strlen(str) - 1;
	j = 0;
	k = 0;
	while (set[j])
	{
		if (str[i] == set[j])
		{
			j = 0;
			k++;
			i--;
		}
		j++;
	}
	return (k);
}

// char	*ft_strtrim(char const *str, char const *set)
// {
// 	int		start;
// 	int		end;
// 	char	*ptr;
// 	int		i;

// 	i = 0;
// 	start = ft_start(str, set);
// 	end = ft_end(str, set);
// 	ptr = malloc(ft_strlen(str) - start - end);
// 	if (!str || !set)
// 		return (NULL);
// 	while (str[start + i] != str[ft_strlen(str) - end])
// 	{
// 		ptr[i] = str[start + i];
// 		i++;
// 	}
// 	return (ptr);
// }

int main()
{
	char arr[] = "I am     the kin I am";
	char set[] = "I am";
	printf("%d", ft_end(arr, set));
}