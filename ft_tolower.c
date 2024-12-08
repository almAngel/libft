/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:58:20 by angel             #+#    #+#             */
/*   Updated: 2024/12/08 21:59:22 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>

// int main(void)
// {
//     printf("OLD: %c\n", tolower('A'));
//     printf("NEW: %c\n", ft_tolower('B'));
//     return (0);
// }