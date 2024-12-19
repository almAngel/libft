/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:48:32 by angel             #+#    #+#             */
/*   Updated: 2024/12/19 12:32:49 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_aux;

	i = 0;
	s_aux = (unsigned char *) s;
	while (i < n)
	{
		if (s_aux[i] == (unsigned char) c)
			return ((void *) &s_aux[i]);
		i++;
	}
	return (0);
}
