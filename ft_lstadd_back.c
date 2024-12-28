/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angellop <angellop@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:45:11 by angellop          #+#    #+#             */
/*   Updated: 2024/12/28 16:21:21 by angellop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*addr;

	if (lst[0])
	{
		addr = lst[0];
		while (addr->next)
			addr = addr->next;
		if (new)
			addr->next = new;
	}
	if (!lst[0])
		lst[0] = new;
}
