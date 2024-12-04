/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angellop <angellop@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:57:34 by angellop          #+#    #+#             */
/*   Updated: 2024/12/04 20:37:35 by angellop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buff, const void *src, size_t n)
{
	char	*buff_aux;
	char	*src_aux;
	size_t	i;

	i = 0;
	buff_aux = (char *) buff;
	src_aux = (char *) src;
	if (buff_aux > src_aux)
		while (n-- > 0)
			buff_aux[n] = src_aux[n];
	else
	{
		while (i < n)
		{
			buff_aux[i] = src_aux[i];
			i++;
		}
	}
	return (buff_aux);
}

// #include <stdio.h>
// #include <string.h>
// #include <strings.h>
// #include <ctype.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char s[] = "HolaMundo";
// 	memmove(s+2, s, 5);

// 	char s2[] = "HolaMundo";
// 	ft_memmove(s2+2, s2, 5);

// 	printf("%s\n", s);
// 	printf("%s\n", s2);
// }