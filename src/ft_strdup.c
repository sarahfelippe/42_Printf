/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 01:34:32 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/25 20:07:55 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*
Function creates a new string, which is a duplicate of 'src', and returns a 
pointer to this string
*/

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;

	new = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
