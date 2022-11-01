/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_16.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:52:04 by sfelippe          #+#    #+#             */
/*   Updated: 2022/10/22 22:59:28 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
Allocates (with malloc(3)) and returns a string representing the integer recei
ved as an argument. Negative numbers must be handled.
Function returns a string representing the integer, or NULL if allocation fails
*/

static int	ft_nblen(unsigned long long int nb)
{
	int	len;

	len = 1;
	while (nb > 15)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}

char	*ft_itoa_16_u(unsigned long long int n)
{
	char	*base;
	char	*str;
	int		n_size;

	base = "0123456789ABCDEF";
	n_size = ft_nblen(n);
	str = (char *) malloc((n_size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[n_size] = '\0';
	while (n_size > 0)
	{
		str[n_size - 1] = base[n % 16];
		n = n / 16;
		n_size--;
	}
	return (str);
}

char	*ft_itoa_16_l(unsigned long long int n)
{
	char	*base;
	char	*str;
	int		n_size;

	base = "0123456789abcdef";
	n_size = ft_nblen(n);
	str = (char *) malloc((n_size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[n_size] = '\0';
	while (n_size > 0)
	{
		str[n_size - 1] = base[n % 16];
		n = n / 16;
		n_size--;
	}
	return (str);
}
