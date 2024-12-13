/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:51:31 by angel             #+#    #+#             */
/*   Updated: 2024/12/12 21:04:19 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*response;
	size_t	i;

	i = 0;
	response = malloc(len);
	while (s[start] && i < len)
	{
		response[i] = s[start + i];
		start++;
		i++;
	}
	return (response);
}
