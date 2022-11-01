/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:10:33 by sfelippe          #+#    #+#             */
/*   Updated: 2022/10/18 20:10:37 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	main(void)
{
	char			character = 'b';
	char			*string = "Como vai você?";
	char			*null_string = NULL;
	char			*pointer = &character;
	char			*null_pointer = (void *)0;
	int				decimal = 58;
	int				integer = -42;
	unsigned int	unsign = 42;
	unsigned char	hexa_l_1 = 0x7FFdaEcf720F;
	unsigned int	hexa_l_2 = 216;
	int				hexa_u_1 = 0x7fFdAeCf720f;
	int				hexa_u_2 = 216;
	int				size_o;
	int				size_f;

	size_o = printf("or_printf:	como vão vocês?\n");
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	como vão vocês?\n");
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	como vão % vocês?\n");
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	como vão % vocês?\n");
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	character '%c'\n", character);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	character '%c'\n", character);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	string '%s'\n", string);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	string '%s'\n", string);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	string '%s'\n", null_string);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	string '%s'\n", null_string);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	oi %s!\n", "sumido");
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	oi %s!\n", "sumido");
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	pointer '%p'\n", pointer);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	pointer '%p'\n", pointer);
	printf("size_f:		%d\n\n", size_f);
   	
	size_o = printf("or_printf:	pointer '%p'\n", null_pointer);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	pointer '%p'\n", null_pointer);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	decimal '%d'\n", decimal);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	decimal '%d'\n", decimal);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	integer '%i'\n", integer);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	integer '%i'\n", integer);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	%i %s, %i %s\n", 123, "indiozinhos", 456, "indiozinhos");
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	%i %s, %i %s\n", 123, "indiozinhos", 456, "indiozinhos");
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	unsign int '%u'\n", unsign);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	unsign int '%u'\n", unsign);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	unsign int '%u'\n", 0);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	unsign int '%u'\n", 0);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	unsign int '%u'\n", -42);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	unsign int '%u'\n", -42);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	hexa_lower '%x'\n", hexa_l_1);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	hexa_lower '%x'\n", hexa_l_1);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	hexa_lower '%x'\n", hexa_l_2);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	hexa_lower '%x'\n", hexa_l_2);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	hexa_lower '%x'\n", 216);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	hexa_lower '%x'\n", 216);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	hexa_upper '%X'\n", hexa_u_1);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	hexa_upper '%X'\n", hexa_u_1);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	hexa_upper '%X'\n", hexa_u_2);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	hexa_upper '%X'\n", hexa_u_2);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	hexa_upper '%X'\n", -216);
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	hexa_upper '%X'\n", -216);
	printf("size_f:		%d\n\n", size_f);

	size_o = printf("or_printf:	percent '%%'\n");
	printf("size_o:		%d\n", size_o);
	size_f = ft_printf("ft_printf:	percent '%%'\n");
	printf("size_f:		%d\n\n", size_f);

	ft_printf("fim\n");
}
