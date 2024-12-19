/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:58:59 by angel             #+#    #+#             */
/*   Updated: 2024/12/19 12:45:57 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	size_t	i;
	size_t	s1_len;
	size_t	t_len;

	i = 0;
	s1_len = ft_strlen(s1);
	t_len = s1_len + ft_strlen(s2);
	s3 = malloc(t_len + 1);
	if (!s3)
		return (NULL);
	while (i < s1_len)
	{
		s3[i] = s1[i];
		i++;
	}
	while (i < t_len)
	{
		s3[i] = s2[i - s1_len];
		i++;
	}
	s3[i] = 0;
	return (s3);
}
