/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:57:34 by angellop          #+#    #+#             */
/*   Updated: 2024/12/19 12:33:46 by angel            ###   ########.fr       */
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
