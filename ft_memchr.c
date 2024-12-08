/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:48:32 by angel             #+#    #+#             */
/*   Updated: 2024/12/09 00:07:38 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *s_aux;

    i = 0;
    s_aux = (unsigned char *) s;
    while (s_aux[i] && i < n)
    {
        if(s_aux[i] == c)
            return (void *) &s_aux[i];
        i++;
    }
    return 0;
        
}

#include <string.h>

int main(void)
{
    char s1[] = "Hello World";

    printf("%s\n", (char *) memchr(s1, 'o', 3));
    printf("%s\n", (char *) ft_memchr(s1, 'o', 3));
}