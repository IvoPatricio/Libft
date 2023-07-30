/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:15:02 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/20 14:23:58 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(count * size);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
