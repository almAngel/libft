/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:59:50 by angel             #+#    #+#             */
/*   Updated: 2024/12/08 23:35:17 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
	while(*s)
    {
        if(*s == c)
            return (char *) s;
        s++;
    }
    return 0;
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     printf("OLD: %s\n", strchr("Angel", 'x'));
//     printf("NEW: %s\n", ft_strchr("Angel", 'x'));
//     return (0);
// }