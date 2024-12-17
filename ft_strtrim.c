/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:10:05 by angel             #+#    #+#             */
/*   Updated: 2024/12/17 22:48:44 by angel            ###   ########.fr       */
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
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
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

static	char	*trimmed(const char *s1, size_t start, size_t len)
{
	char	*response;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	response = malloc(len + 1);
	if (!response)
		return (NULL);
	i = 0;
	while (i < len)
	{
		response[i] = s1[start + i];
		i++;
	}
	response[i] = 0;
	return (response);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1)
		return (ft_strdup(""));
	while (ft_fromset(s1[i], set))
		i++;
	while (ft_fromset(s1[j], set))
		j--;
	return (trimmed(s1, i, j - (i - 1)));
}

// int main(void)
// {
// 	printf("%s\n", ft_strtrim("", ""));
// 	printf("%s\n", ft_strtrim("@-.Hola_Mundo!.-@", "@-."));
// 	printf("%s\n", ft_strtrim("abcd", ""));

// 	return (0);
// }