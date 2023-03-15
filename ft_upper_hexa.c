/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_upper_hexa.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 14:51:47 by tde-brui      #+#    #+#                 */
/*   Updated: 2023/02/21 12:30:19 by tijmendebru   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uphex_todec(unsigned int n)
{
	unsigned int	i;
	char			*ptr;
	int				temp;

	i = ft_hexa_len(n);
	ptr = malloc((sizeof(char) * i) + 1);
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	while (n > 0)
	{
		temp = n % 16;
		if (temp > 9)
			ptr[i - 1] = temp + 55;
		else
			ptr[i - 1] = temp + 48;
		i--;
		n = n / 16;
	}
	return (ptr);
}

int	ft_upper_hexa(unsigned int n)
{
	char	*ptr;

	if (n == 0)
		return (printf_putchar('0'));
	ptr = ft_uphex_todec(n);
	printf_putstr(ptr);
	free(ptr);
	return (ft_hexa_len(n));
}
