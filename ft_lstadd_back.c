/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:33:03 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/19 10:54:15 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*add;

	if (lst != 0)
	{
		if (*lst != NULL)
		{
			add = ft_lstlast(*lst);
			add->next = new;
		}
		else
			*lst = new;
	}
}
