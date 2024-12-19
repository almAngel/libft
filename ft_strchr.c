/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:59:50 by angel             #+#    #+#             */
/*   Updated: 2024/12/19 12:44:38 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s);
	c %= 256;
	if (c == '\0')
		return ((char *) &s[s_len]);
	while (s[i] && s[i] != c)
		i++;
	if (i == s_len)
		return (0);
	return ((char *) &s[i]);
}
