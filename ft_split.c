/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 11:46:05 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/16 14:55:25 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

static int	ft_stringsnum(char const *str1, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = ft_strlen(str1);
	k = 0;
	while (str1[i])
	{
		while ((str1[i] == c) && str1[i] != '\0')
			i++;
		while (str1[i] != c && str1[i] != '\0')
			i++;
		k++;
	}
	if (str1[j - 1] == c)
		k--;
	return (k);
}

static void	ft_free(char **ptr, int j)
{
	while (j > 0)
	{
		free(ptr[j]);
		j--;
	}
	free(ptr);
}

static size_t	ft_len(char const *str1, char c, int i)
{
	int	k;

	k = 0;
	while (str1[i] != c && str1[i] != '\0')
	{
		i++;
		k++;
	}
	return (k);
}

char	**ft_split(char const *str1, char c)
{
	char				**ptr;
	unsigned int		i;
	int					j;

	i = 0;
	j = 0;
	ptr = (char **)malloc((ft_stringsnum(str1, c) + 1) * sizeof(char *));
	if (ptr == 0)
		return (ptr);
	while (j < ft_stringsnum(str1, c))
	{
		while (str1[i] == c && str1[i] != '\0')
			i++;
		ptr[j] = ft_substr(str1, i, ft_len(str1, c, i));
		if (ptr[j] == 0)
		{
			ft_free(ptr, j);
			return (0);
		}
		while (str1[i] != c && str1[i] != '\0')
			i++;
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}

// int main()
// {
// 	int i = 0;
// 	char **array = ft_split("      split       this for   me  !       ", ' ');
// 	// printf("%d", ft_len("ik ben Tijmen"))
// 	while (array[i])
// 	{
// 		printf("%s\n", array[i]);
// 		i++;
// 	}
// 	// printf("%d", ft_stringsnum("  split    this       FOR      ", ' '));
// }
