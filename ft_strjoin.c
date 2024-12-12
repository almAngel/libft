/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:58:59 by angel             #+#    #+#             */
/*   Updated: 2024/12/12 17:07:44 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	n;

	n = 0;
	while (*str)
	{
		n++;
		str++;
	}
	return (n);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	s1_len;
	size_t	t_len;

	i = 0;
	s1_len = ft_strlen(s1);
	t_len = s1_len + ft_strlen(s2);
	s3 = malloc(t_len);
	while(i < s1_len)
		s3[i] = s1[i++];
	while(i < t_len)
		s3[i] = s2[i++];
	return (s3);
}