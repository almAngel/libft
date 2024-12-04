/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angellop <angellop@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:50:19 by angellop          #+#    #+#             */
/*   Updated: 2024/12/04 21:11:00 by angellop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	n;

	n = 0;
	while (*str)
	{
		n++;
		str++;
	}
	return (n);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= destlen)
		return (size + srclen);
	while (src[i] && (destlen + i) < (size - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>
// #include <strings.h>
// #include <ctype.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char s[] = "Hola";

// 	printf("%zu\n", strlcat(s, "Mundo", 5));
// 	printf("%zu\n", ft_strlcat(s, "Mundo", 5));
// }