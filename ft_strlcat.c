/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:04:48 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/18 20:47:49 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dt;
	size_t	sc;
	size_t	i;
	size_t	x;

	dt = ft_strlen(dst);
	sc = ft_strlen(src);
	x = dt;
	i = 0;
	if (dstsize > 0 && dt < dstsize - 1)
	{
		while (src[i] && dt + i < dstsize - 1)
		{
			dst[x] = src[i];
			i++;
			x++;
		}
		dst[x] = 0;
	}
	if (dstsize < dt)
		dt = dstsize;
	return (dt + sc);
}
