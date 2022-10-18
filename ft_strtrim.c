/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 16:23:42 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/18 16:11:18 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	ft_start(char const *str, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (set[j] == str[i])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static int	ft_end(char const *str, char const *set)
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
		else
			j++;
	}
	return (k);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int		start;
	int		end;
	char	*ptr;
	int		i;
	int		sum;

	i = 0;
	start = ft_start(str, set);
	end = ft_end(str, set);
	sum = ft_strlen(str) - start - end;
	ptr = malloc((sizeof(char)) * sum + 1);
	if (ptr == 0)
		return (0);
	if (!str || !set)
		return (NULL);
	while (str[start + i] && (start + i) < (int)ft_strlen(str) - end)
	{
		ptr[i] = str[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main()
// {
// 	char arr[] = "";
// 	char set[] = "";
// 	printf("%s", ft_strtrim(arr, set));
// }