/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 00:52:04 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/25 22:59:28 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
Allocates (with malloc(3)) and returns a string representing the integer recei
ved as an argument. Negative numbers must be handled.
Function returns a string representing the integer, or NULL if allocation fails
*/

static int	ft_nblen(int nb)
{
	int	len;

	if (nb < 0)
	{
		len = 2;
		while (nb < -9)
		{
			nb = nb / 10;
			len++;
		}
	}
	if (nb >= 0)
	{
		len = 1;
		while (nb > 9)
		{
			nb = nb / 10;
			len++;
		}
	}
	return (len);
}

char	*ft_itoa_10(int n)
{
	char	*str;
	int		size;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_nblen(n);
	str = (char *) malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		n = n * -1;
		i++;
	}
	str[size] = '\0';
	while (size > i)
	{
		str[size - 1] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	return (str);
}
