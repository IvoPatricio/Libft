/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:09:44 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/20 11:04:47 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && i < (n - 1) && (s1[i]) && (s2[i]))
	{
		i++;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)s1[i] - ((unsigned char)s2[i]));
}
