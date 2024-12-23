/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angellop <angellop@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:26:16 by angellop          #+#    #+#             */
/*   Updated: 2024/12/20 16:26:18 by angellop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_aux;
	unsigned char	*s2_aux;
	size_t			i;
	int				res;

	i = 0;
	res = 0;
	s1_aux = (unsigned char *) s1;
	s2_aux = (unsigned char *) s2;
	while (i < n)
	{
		if (s1_aux[i] != s2_aux[i])
			return ((unsigned char) s1_aux[i] - (unsigned char) s2_aux[i]);
		i++;
	}
	return (0);
}
