/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:54:42 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/26 23:54:29 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

char	*ft_itoa_10(int n);
char	*ft_itoa_16_u(unsigned long long int n);
char	*ft_itoa_16_l(unsigned long long int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
char	*ft_utoa_10(unsigned int n);

int		ft_printf(const char *format, ...);
int		ft_print_char(int c);
int		ft_print_string(char *str);
int		ft_print_decimal(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hexa_lower(unsigned int n);
int		ft_print_hexa_upper(unsigned int n);
int		ft_print_pointer(unsigned long long int ptr);

#endif