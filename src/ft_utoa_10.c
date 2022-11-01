/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 00:52:04 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/25 22:59:28 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
Allocates (with malloc(3)) and returns a string representing an unsigned integer
received as an argument. Negative numbers are not allowed.
Function returns a string representing the integer, or NULL if allocation fails
*/

static int	ft_nblen(unsigned int nb)
{
	int	len;

	len = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_utoa_10(unsigned int n)
{
	char	*str;
	int		size;
	int		i;

	size = ft_nblen(n);
	str = (char *) malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[size] = '\0';
	i = 0;
	while (size > i)
	{
		str[size - 1] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	return (str);
}
