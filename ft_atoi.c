/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 00:42:05 by angel             #+#    #+#             */
/*   Updated: 2024/12/13 02:13:10 by angel            ###   ########.fr       */
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

int	ft_atoi(const char *nptr)
{
	size_t				i;
	unsigned long long	result;
	short				sign;

	result = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\r' || nptr[i] == '\t'
		|| nptr[i] == '\n' || nptr[i] == '\v' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (result > __LONG_LONG_MAX__)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		result = (result * 10) + nptr[i++] - '0';
	}
	return (result * sign);
}

// #include <stdlib.h>
// #include <limits.h>

// int main(void)
// {
//     printf("test 	1:   %d\n", ft_atoi(" \t\v\n\r\f123"));
// 	printf("test 	2:   %d\n", ft_atoi("0"));
// 	printf("test 	3:   %d\n", ft_atoi("-1000043"));
// 	printf("test 	4:   %d\n", ft_atoi("+0000000000000000000000000000000000000000000000000000123"));
// 	printf("test 	5:   %d\n", ft_atoi("    123"));
// 	printf("test 	6:   %d\n", ft_atoi("--123"));
// 	printf("test 	7:   %d\n", ft_atoi("-+123"));
// 	printf("test 	8:   %d\n", ft_atoi("+-123"));
// 	printf("test 	9:   %d\n", ft_atoi("++123"));
// 	printf("test 	10:   %d\n", ft_atoi("- 123"));
// 	printf("test 	11:   %d\n", ft_atoi("+ 123"));
// 	printf("test 	12:   %d\n", ft_atoi("+\n123"));
// 	printf("test 	13:   %d\n", ft_atoi("1209"));
// 	printf("test 	14:   %d\n", ft_atoi("12/3"));
// 	printf("test 	15:   %d\n", ft_atoi("12;3"));
// 	printf("test 	16:   %d\n", ft_atoi("-1000043"));
// 	printf("test 	17:   %d\n", ft_atoi("-1000043"));

//     return 0;
// }