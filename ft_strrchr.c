/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:08:37 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/05 10:55:32 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (0 <= i)
	{
		if (((char)c) == s[i])
			return ((char *)(s + i));
		i--;
	}
	if ((char)c == s[i])
		return ((char *)s);
	return (NULL);
}
