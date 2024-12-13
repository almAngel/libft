/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 00:08:29 by angel             #+#    #+#             */
/*   Updated: 2024/12/13 02:12:52 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_aux;
	unsigned char	*s2_aux;
	size_t			i;
	int				res;

	i = 0;
	res = 0;
	s1_aux = (unsigned char *) s1;
	s2_aux = (unsigned char *) s2;
	while (s1_aux[i] == s2_aux[i] && i < n)
		i++;
	if (s1_aux[i] != s2_aux[i] && i < n)
		res = (unsigned char) s1_aux[i] - (unsigned char) s2_aux[i];
	return (res);
}

// #include <string.h>

// int main(void)
// {
// 	printf("test 1: %d\n", ft_memcmp("abc", "abc", 7));					// 0

//     return 0;
// }