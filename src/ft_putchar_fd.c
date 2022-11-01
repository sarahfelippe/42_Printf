/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 02:44:12 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/20 23:37:01 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
Function outputs the character ’c’ to the given file descriptor. 
There's no return
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
