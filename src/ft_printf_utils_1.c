/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:37:30 by sfelippe          #+#    #+#             */
/*   Updated: 2022/10/17 19:37:35 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_string(char *str)
{
	if (str == 0)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_print_decimal(int n)
{
	char	*str;
	int		size;

	str = ft_itoa_10(n);
	ft_putstr_fd(str, 1);
	size = ft_strlen(str);
	free (str);
	return (size);
}

int	ft_print_unsigned(unsigned int n)
{
	char	*str;
	int		size;

	str = ft_utoa_10(n);
	ft_putstr_fd(str, 1);
	size = ft_strlen(str);
	free (str);
	return (size);
}
