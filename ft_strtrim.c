/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:10:05 by angel             #+#    #+#             */
/*   Updated: 2024/12/12 19:56:40 by angel            ###   ########.fr       */
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

int	ft_fromset(char c, const char *set)
{
	while(*set)
		if (c == *set++)
			return (1);
	return (0);
}

char		*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	z;
	char	*response;
	
	i = 0;
	z = 0;
	j = ft_strlen(s1) - 1;
	while (ft_fromset(s1[i], set))
		i++;
	while (ft_fromset(s1[j], set))
		j--;
	response = malloc(j - i + 1);
	while (z < j - i + 1)
	{
		response[z] = s1[z + i];
		z++;
	}
	return (response);
}

// int main(void)
// {
// 	char	*s1 = "@-.Hola_Mundo!.-@";

// 	printf("%s\n", ft_strtrim(s1, "@-."));

// 	return (0);
// }