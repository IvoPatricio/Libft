/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:19:20 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/21 12:48:51 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	*ft_strtrim(char const *s1, char const *set);
{
	char	*dest;
	int		i;
	int		x;
	int		j;

	dest = (char *)malloc(sizeof(*s1) * (strlen(s1)));
	if (dest == NULL)
		return (NULL);
	i = 0;
	x = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == set[x])
		{
			i++;
			x++;
		}
		dest[j] = s1[i];
		i++;
		j++;
	}
	dest[j] = '\0';	
	return (dest);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (ft_strlen(s1) <= 0)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) != NULL)
	{
		if (start++ > end)
			return (ft_strdup(""));
	}
	while (ft_strchr(set, s1[end]) != NULL)
	{
		if (end-- <= start)
			return (ft_strdup(""));
	}
	return (ft_substr(s1, start, end + 1 - start));
}
