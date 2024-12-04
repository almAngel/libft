/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angellop <angellop@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:57:34 by angellop          #+#    #+#             */
/*   Updated: 2024/12/04 20:37:10 by angellop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buff, const void *src, size_t n)
{
	char		*buff_aux;
	const char	*src_aux;

	buff_aux = (char *) buff;
	src_aux = (const char *) src;
	while (n--)
		*buff_aux++ = *src_aux++;
	return (buff);
}

// #include <stdio.h>
// #include <string.h>
// #include <strings.h>
// #include <ctype.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char s[] = "HolaMundo";
// 	memcpy(s+2, s, 5);

// 	char s2[] = "HolaMundo";
// 	ft_memcpy(s2+2, s2, 5);
// 	printf("Original: %s\n", s);
// 	printf("Nueva: 	  %s\n", s2);
// }