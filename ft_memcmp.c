/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 00:08:29 by angel             #+#    #+#             */
/*   Updated: 2024/12/09 00:23:18 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *s1_aux;
    unsigned char *s2_aux;
    size_t i;
    int res;

    i = 0;
    res = 0;
    s1_aux = (unsigned char *) s1;
    s2_aux = (unsigned char *) s2;
    while(s1_aux[i] && s2_aux[i] && i < n)
    {
        res += s1_aux[i] - s2_aux[i];
        i++;
    }   
    return res;
}

#include <string.h>

int main(void)
{
    char s1[] = "ABDD";
    char s2[] = "ABCD";

    printf("%d\n", memcmp(s1, s2, 4));
    printf("%d\n", ft_memcmp(s1, s2, 4));

    return 0;
}