/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:59:50 by angel             #+#    #+#             */
/*   Updated: 2024/12/13 02:04:23 by angel            ###   ########.fr       */
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

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	printf("0: %s\n", ft_strchr("teste", 't'));
// 	printf("1: %s\n", ft_strchr("teste", 'e'));
// 	printf("2: %s\n", ft_strchr("teste", '\0'));
//     printf("3: %s\n", ft_strchr("teste", 'a'));
// 	printf("4: %s\n", ft_strchr("teste", 'e' + 256));
// 	printf("5: %s\n", ft_strchr("teste", 1024));
//     return (0);
// }