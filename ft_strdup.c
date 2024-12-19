/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:42:03 by angel             #+#    #+#             */
/*   Updated: 2024/12/19 17:15:00 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*s_cpy;
	char	len;

	i = 0;
	len = ft_strlen(s);
	s_cpy = malloc(len + 1);
	if (!s_cpy)
		return (NULL);
	while (s[i])
	{
		s_cpy[i] = s[i];
		i++;
	}
	s_cpy[i] = 0;
	return (s_cpy);
}
