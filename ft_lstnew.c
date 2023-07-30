/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:30:27 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/18 18:04:53 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*i;

	i = (t_list *)malloc(sizeof(*i));
	if (i == NULL)
		return (NULL);
	i->content = content;
	i->next = NULL;
	return (i);
}
