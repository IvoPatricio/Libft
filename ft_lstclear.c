/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:35:19 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/19 09:51:32 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*dest;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		dest = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = dest;
	}
}
