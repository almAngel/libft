/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:35:30 by angel             #+#    #+#             */
/*   Updated: 2024/12/08 23:47:25 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    int res;

    i = 0;
    res = 0;
    while(s1[i] && s2[i] && i < n)
    {
        res += s1[i] - s2[i];
        i++;
    }   
    return res;
}

// #include <string.h>

// int main(void)
// {
//     char s1[] = "ABDD";
//     char s2[] = "ABCD";

//     printf("%d\n", strncmp(s1, s2, 2));
//     printf("%d\n", ft_strncmp(s1, s2, 2));

//     return 0;
// }