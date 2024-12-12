/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 00:42:05 by angel             #+#    #+#             */
/*   Updated: 2024/12/12 15:29:30 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t n;

    n = 0;
    while (*str)
    {
        n++;
        str++;
    }
    return (n);
}

int ft_atoi(const char *nptr)
{
    int i;
    int a;
    short sign;
    int digits;
    int result;

    result = 0;
    sign = 1;
    i = 0;
    while (!(nptr[i] > '0' && nptr[i] < '9') && nptr[i] != '+' && nptr[i] != '-') 
        i++;
    while (nptr[i] == '+' || nptr[i] == '-')
    {
        if (a++ > 0)
            return (0);
        if (nptr[i++] == '-')
            sign *= -1;
    }
    digits = (int) ft_strlen(&nptr[i]);
    a = i;
    while (nptr[i] && i < a + digits)
        result = (result * 10) + nptr[i++] - '0';
    return (result * sign);
}

// #include <stdlib.h>

// int main(void)
// {
//     char s1[] = "   -32849";
//     // char s2[] = "ABCD";

//     printf("og_atoi:    %d\n", atoi(s1));
//     printf("new_atoi:   %d\n", ft_atoi(s1));
//     // ft_atoi(s1);

//     return 0;
// }