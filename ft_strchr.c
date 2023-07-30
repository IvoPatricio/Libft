/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:07:40 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/20 14:20:44 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	dest;
	char	*sc;

	dest = (char)c;
	sc = (char *)s;
	i = 0;
	while (s[i])
	{
		if (dest == sc[i])
			return (&sc[i]);
		i++;
	}
	if (dest == '\0')
		return (&sc[i]);
	return (NULL);
}
