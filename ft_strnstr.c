/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 23:43:55 by angel             #+#    #+#             */
/*   Updated: 2024/12/19 12:37:27 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == 0)
		return ((char *) big);
	while (*big && i < len)
	{
		j = 0;
		while (*(big + j) && *(big + j) == *(little + j) && (i + j) < len)
			j++;
		if (*(little + j) == '\0')
			return ((char *) big);
		big++;
		i++;
	}
	return (0);
}
