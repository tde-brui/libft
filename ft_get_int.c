/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_int.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 14:33:53 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/28 18:27:42 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_int(int n)
{
	char	*ptr;

	ptr = ft_itoa(n);
	ft_putstr(ptr);
	free(ptr);
	return (ft_len(n));
}
