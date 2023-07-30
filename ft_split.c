/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:25:17 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/21 18:26:31 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	delimiter(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] == c)
	{
		i++;
	}
	return (i);
}

static int	n_palavras(char *s, char c, int i)
{
	int	x;

	x = 0;
	while (s[i] != 0 && s[i] != c)
	{
		i++;
		x++;
	}
	return (x);
}

int	n_array(char *s, char c)
{
	int	i;
	int	x;

	x = 0;
	i = delimiter(s, c);
	while (s[i] != 0)
	{
		while (s[i] != c && s[i] != 0)
		{
			i++;
		}
		while (s[i] == c && s[i] != 0)
		{
			i++;
		}
		x++;
	}
	return (x);
}

char	**junction_strs(char *s, char c, int i)
{
	int		array;
	int		string;
	char	**dest;

	dest = (char **)malloc(sizeof(char *) * (n_array(s, c) + 1));
	if (dest == NULL )
		return (NULL);
	string = 0;
	while (s[i] != '\0')
	{
		array = 0;
		dest[string] = (char *)malloc(sizeof(char) * (n_palavras(s, c, i) + 1));
		if (dest[string] == NULL)
			return (NULL);
		while (s[i] != c && s[i] != '\0')
		{
			dest[string][array++] = s[i++];
		}
		dest[string++][array] = '\0';
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	dest[string] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	*l;
	char	**dest;

	l = (char *)s;
	if (!s)
		return (NULL);
	i = delimiter(l, c);
	dest = junction_strs(l, c, i);
	return (dest);
}
/*
{
	char	**dest;
	int		is;
	int		x;
	int		array;
	int		string;

	dest = (char **)malloc(sizeof(*s) * (ft_strlen(s)));
	if (dest == NULL)
		return (NULL);
	i = 0;
	x = 0;
	array = 0;
	string = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			dest[array][string] = s[i];
			i++;
			array++;
		}
		dest[array][string] = s[i];
		string++;
		i++;
	}
	return (dest);
}
static int	ft_Speclen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s && s++)
	{
		while (*s != c && *s)
			s++;
		i++;
		while (*s == c && *s)
			s++;
	}
	return (i);
}

static int	fill(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s != c && *s && ++s)
			len++;
		tab[i] = malloc(len + 1);
		if (!tab[i])
		{
			while (i)
				free(tab[--i]);
			free(tab);
			return (1);
		}
		ft_strlcpy(tab[i++], s - len, len + 1);
		while (*s == c && *s)
			s++;
	}
	tab[i] = 0;
	return (0);
}

char	**ft_split(char const *s, char c);

{
	char	**dest;

	if (s == NULL)
		return (NULL);
	while (*s == c && *s)
		s++;
	dest = (char **)malloc(sizeof(char *) * (ft_Speclen(s, c) + 1));
	if (dest == NULL)
		return (NULL);
	if (fill(s, c, dest))
		return (NULL);
	return (dest);
}
*/
/*
int	main()
{
	char **str = ft_split(" oi123 1 ", ' ');
	printf("%s\n", str[0]);
}*/
