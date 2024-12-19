/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:57:34 by angellop          #+#    #+#             */
/*   Updated: 2024/12/19 12:33:39 by angel            ###   ########.fr       */
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
