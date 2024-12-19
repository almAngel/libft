/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:59:50 by angel             #+#    #+#             */
/*   Updated: 2024/12/19 12:46:31 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s);
	j = s_len;
	c %= 256;
	if (c == '\0')
		return ((char *) &s[s_len]);
	while (s[i] && s[i] != c)
		i++;
	while (s[j] != c && j > 0)
		j--;
	if (i == s_len)
		return (0);
	if (j > i)
		return ((char *) &s[j]);
	return ((char *) &s[i]);
}
