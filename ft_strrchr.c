/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:59:50 by angel             #+#    #+#             */
/*   Updated: 2024/12/13 02:04:45 by angel            ###   ########.fr       */
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

// char	*ft_strrchr(const char *s, int c)
// {
// 	char	*s_aux;

// 	s_aux = 0;
// 	c %= 256;
// 	while (*s)
// 	{
// 		if (*s == c)
// 			s_aux = (char *) s;
// 		s++;
// 	}
// 	return ((char *) s_aux);
// }

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

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     printf("0: %s\n", ft_strrchr("teste", 'e'));
//     printf("1: %s\n", ft_strrchr("teste", '\0'));
// 	printf("2: %s\n", ft_strrchr("xteste", 'x'));
// 	printf("3: %s\n", ft_strrchr("teste", 'x'));
// 	printf("4: %s\n", ft_strrchr("teste", 1024 + 'e'));
// 	printf("5: %s\n", ft_strrchr("teste", 1024));
// 	printf("6: %s\n", ft_strrchr("pepe y cparlos", 'c'));
//     return (0);
// }