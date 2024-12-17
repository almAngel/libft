/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:42:03 by angel             #+#    #+#             */
/*   Updated: 2024/12/17 13:26:55 by angel            ###   ########.fr       */
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

// #include <string.h>

// int main(void)
// {

// 	printf("Test 1: %s\n", ft_strdup(""));
// 	printf("Test 2: %s\n", ft_strdup("sadfvbf"));
// 	printf("Test 3: %s\n", ft_strdup("fdfjkdf\n35346"));

// 	return (0);
// }