/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 00:42:05 by angel             #+#    #+#             */
/*   Updated: 2024/12/17 21:04:54 by angel            ###   ########.fr       */
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
