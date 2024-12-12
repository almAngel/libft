/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angellop <angellop@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:45:54 by angellop          #+#    #+#             */
/*   Updated: 2024/12/03 17:55:14 by angellop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || \
		(c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void)
// {
//     printf("OLD: %d\n", isalpha('A'));
//     printf("NEW: %d\n", ft_isalpha('A'));
//     return (0);
// }