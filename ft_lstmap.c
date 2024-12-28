/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angellop <angellop@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:42:57 by angellop          #+#    #+#             */
/*   Updated: 2024/12/28 19:33:01 by angellop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*response;
	t_list	*parallel;

	if (!lst || !f || !del)
		return (NULL);
	response = NULL;
	while (lst)
	{
		parallel = ft_lstnew(f(lst->content));
		if (!parallel)
		{
			ft_lstclear(&response, del);
			del(parallel->content);
			return (NULL);
		}
		ft_lstadd_back(&response, parallel);
		lst = lst->next;
	}
	return (response);
}
