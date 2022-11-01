/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:37:30 by sfelippe          #+#    #+#             */
/*   Updated: 2022/10/17 19:37:35 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_hexa_lower(unsigned int n)
{
	char	*str;
	int		size;

	str = ft_itoa_16_l(n);
	ft_putstr_fd(str, 1);
	size = ft_strlen(str);
	free (str);
	return (size);
}

int	ft_print_hexa_upper(unsigned int n)
{
	char	*str;
	int		size;

	str = ft_itoa_16_u(n);
	ft_putstr_fd(str, 1);
	size = ft_strlen(str);
	free (str);
	return (size);
}

int	ft_print_pointer(unsigned long long int ptr)
{
	int		size;
	char	*str;

	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	str = ft_itoa_16_l(ptr);
	ft_putstr_fd(str, 1);
	size = ft_strlen(str) + 2;
	free (str);
	return (size);
}
