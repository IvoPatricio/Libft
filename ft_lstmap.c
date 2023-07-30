/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:37:18 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/21 12:48:19 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*add;

	if (!lst)
		return (NULL);
	add = ft_lstnew(f(lst->content));
	new = add;
	while (lst->next != NULL)
	{
		lst = lst->next;
		add->next = ft_lstnew(f(lst->content));
		add = add->next;
		if (add == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
	}
	return (new);
}
