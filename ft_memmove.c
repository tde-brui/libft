/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:01:22 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/12 12:52:10 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned long	i;
	char			*ptrsrc;
	char			*ptrdest;

	i = 0;
	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	if (ptrdest == 0 && ptrsrc == 0 && num == 0)
		return (0);
	if (num < 1)
	{
		return (dest);
	}
	while (i < num)
	{
			ptrdest[i] = ptrsrc[i];
			i++;
	}
	return (dest);
}

// int main()
// {
// 	char src[] = "";
// 	char dest[] = "lmao";
// 	if (dest != memmove(dest, src, 8))
//     	write(1, "dest's adress was not returned\n", 31);
//     write(1, dest, 22);
// }