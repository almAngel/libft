/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:42:03 by angel             #+#    #+#             */
/*   Updated: 2024/12/12 20:26:06 by angel            ###   ########.fr       */
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
	s_cpy = malloc(len);
	while (s[i])
	{
		s_cpy[i] = s[i];
		i++;
	}
	return (s_cpy);
}

// #include <string.h>

// int main(void)
// {
// 	char	*s = "Hello World!";

// 	printf("og: %s\n", strdup(s));
// 	printf("new: %s\n", ft_strdup(s));
// 	return (0);
// }