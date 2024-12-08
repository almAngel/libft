/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:59:50 by angel             #+#    #+#             */
/*   Updated: 2024/12/08 22:59:13 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char *s_aux;

    s_aux = 0;
	while(*s)
    {
        if(*s == c)
            s_aux = (char *) s;
        s++;
    }
    return (char *) s_aux;
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     printf("OLD: %s\n", strrchr("Angeeeeeeaeaeaeael", 'a'));
//     printf("NEW: %s\n", ft_strrchr("Angeeeeeeaeaeaeael", 'a'));
//     return (0);
// }