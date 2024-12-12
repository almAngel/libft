/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:51:31 by angel             #+#    #+#             */
/*   Updated: 2024/12/12 16:57:58 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*response;
	int		i;
	
	i = 0;
	response = malloc(len);
	while(s[start] && i < len)
		response[i] = s[start++ + i++];
	return (response);
}