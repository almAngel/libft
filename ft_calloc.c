/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angel <angel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:30:58 by angel             #+#    #+#             */
/*   Updated: 2024/12/12 16:43:42 by angel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    if (nmemb == 0 || size == 0)
        return (NULL);
    return (malloc(nmemb * size));
}

// int main(void)
// {
//     char    *str =  (char *) calloc(5, 1);
//     char    *str2 = (char *) ft_calloc(5, 1);

//     printf("string 1: %ld\n", str);
//     printf("string 2: %ld\n", str2);

//     return 0;
// }