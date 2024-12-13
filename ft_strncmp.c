/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:35:30 by angel             #+#    #+#             */
/*   Updated: 2024/12/13 02:05:29 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		res;
	size_t	i;

	i = 0;
	res = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (s1[i] != s2[i] && i < n)
		res = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (res);
}

// #include <string.h>

// int main(void)
// {
// 	printf("test 1: %d\n", ft_strncmp("", "", 0));					// 0
// 	printf("test 2: %d\n", ft_strncmp("", "", 1));					// 0
// 	printf("test 3: %d\n", ft_strncmp("", "", 2));					// 0
// 	printf("test 4: %d\n", ft_strncmp("test", "", 0));				// 0
//     printf("test 5: %d\n", ft_strncmp("test", "", 1));				// 1
// 	printf("test 6: %d\n", ft_strncmp("test", "", 2));				// 1
// 	printf("test 7: %d\n", ft_strncmp("", "test", 0));				// 0
// 	printf("test 8: %d\n", ft_strncmp("", "test", 1));				// -1
// 	printf("test 9: %d\n", ft_strncmp("", "test", 2));				// -1
// 	printf("test 10: %d\n", ft_strncmp("teste", "teste", 0));		// 0
// 	printf("test 12: %d\n", ft_strncmp("teste", "teste", 1));		// 0
// 	printf("test 13: %d\n", ft_strncmp("teste", "teste", 5));		// 0
// 	printf("test 15: %d\n", ft_strncmp("teste", "teste", 7));		// 0
// 	printf("test 16: %d\n", ft_strncmp("teste", "testex", 6));		// -1
// 	printf("test 17: %d\n", ft_strncmp("teste", "test", 10));		// 1
// 	printf("test 18: %d\n", ft_strncmp("test", "teste", 10));		// -1
// 	printf("test 19: %d\n", ft_strncmp("abcdef", "abc\375xx", 5));	// -1

//     return 0;
// }