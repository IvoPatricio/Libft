/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:23:23 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/20 14:23:25 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		x = 0;
		while (haystack[i + x] && needle[x] && \
				i + x < len && haystack[i + x] == needle[x])
			x++;
		if (!needle[x])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
