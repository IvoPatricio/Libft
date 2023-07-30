/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:18:41 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/20 11:11:21 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	x;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	s3 = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i] != '\0')
	{
		s3[x++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s3[x++] = s2[i];
		i++;
	}
	s3[x] = '\0';
	return (s3);
}
