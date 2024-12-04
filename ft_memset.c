/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angellop <angellop@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:42:53 by angellop          #+#    #+#             */
/*   Updated: 2024/12/03 18:58:40 by angellop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buff, int c, size_t n)
{
	char	*buff_aux;
	size_t	i;

	i = 0;
	buff_aux = (char *)buff;
	while (i < n)
		buff_aux[i++] = c;
	return (buff_aux);
}
