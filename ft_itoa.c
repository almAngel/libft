/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 00:31:12 by angel             #+#    #+#             */
/*   Updated: 2024/12/18 00:58:11 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*setup(int len)
{
	char	*tmp;

	tmp = malloc(len + 1);
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}

int	count_digits(long num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		count++;
		num = -num;
	}
	if (num == 0)
		count++;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;
	long	num;

	num = n;
	len = count_digits(num);
	result = setup(len);
	if (!result)
		return (NULL);
	if (num < 0)
		num = -num;
	i = len - 1;
	while (num != 0)
	{
		result[i] = (num % 10) + 48;
		num = num / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = 0;
	return (result);
}

// int main (void)
// {
// 	printf("%s\n", ft_itoa(0));

// 	return (0);
// }