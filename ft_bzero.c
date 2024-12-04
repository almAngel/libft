/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angellop <angellop@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:45:41 by angellop          #+#    #+#             */
/*   Updated: 2024/12/04 21:20:57 by angellop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buff, size_t n)
{
	char	*buff_aux;
	size_t	i;

	i = 0;
	buff_aux = (char *) buff;
	while (i < n)
		buff_aux[i++] = '\0';
}

// #include <stdio.h>
// #include <string.h>
// #include <strings.h>
// #include <ctype.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char s[] = "HolaMundo";
// 	bzero(s, 3);

// 	char s2[] = "HolaMundo";
// 	ft_bzero(s2, 3);
// 	printf("Original: %s\n", s);
// 	printf("Nueva: 	  %s\n", s2);
// }