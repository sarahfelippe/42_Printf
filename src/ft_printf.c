/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:37:30 by sfelippe          #+#    #+#             */
/*   Updated: 2022/10/17 19:37:35 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_print_flag(va_list args, char flag)
{
	int	final_length;

	final_length = 0;
	if (flag == 'c')
		final_length = ft_print_char(va_arg(args, int));
	else if (flag == 's')
		final_length = ft_print_string(va_arg(args, char *));
	else if (flag == 'p')
		final_length = ft_print_pointer(va_arg(args, unsigned long long int));
	else if (flag == 'i' || flag == 'd')
		final_length = ft_print_decimal(va_arg(args, int));
	else if (flag == 'u')
		final_length = ft_print_unsigned(va_arg(args, unsigned int));
	else if (flag == 'X')
		final_length = ft_print_hexa_upper(va_arg(args, unsigned int));
	else if (flag == 'x')
		final_length = ft_print_hexa_lower(va_arg(args, unsigned int));
	else if (flag == '%')
	{
		final_length = 1;
		ft_putchar_fd('%', 1);
	}
	return (final_length);
}

static int	ft_check_flag(char c)
{
	if (c != 'c' && c != 's' && c != 'p' && c != 'i' && c != 'd' && \
								c != 'u' && c != 'x' && c != 'X' && c != '%')
		return (0);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		final_length;
	int		i;

	final_length = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_check_flag(format[i + 1]) == 1)
		{
			final_length += ft_print_flag(args, format[i + 1]);
			i++;
		}
		else
			final_length += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (final_length);
}
