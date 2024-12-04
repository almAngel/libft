/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angellop <angellop@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:02:28 by angellop          #+#    #+#             */
/*   Updated: 2024/12/04 21:10:25 by angellop         ###   ########.fr       */
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

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size > 0)
	{
		if (size <= destlen)
			return (size + srclen);
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>

int	main(void)
{
	// char s[] = "Hola";
	char s2[] = "Hola";

	// printf("%zu\n", strlcpy(s, "Mundo", 5));
	printf("%zu\n", ft_strlcpy(s2, "Mundo", 5));

	// printf("%s\n", s);
	printf("%s", s2);
}