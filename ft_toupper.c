/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:16:24 by angellop          #+#    #+#             */
/*   Updated: 2024/12/08 21:58:07 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void)
// {
//     printf("OLD: %c\n", toupper('0'));
//     printf("NEW: %c\n", ft_toupper('0'));
//     return (0);
// }