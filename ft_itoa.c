/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:26:18 by ifreire-          #+#    #+#             */
/*   Updated: 2021/11/20 20:36:45 by ifreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int i)
{
	int	size;

	size = 0;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		i = i / 10;
		size++;
	}
	return (size);
}

char	*ft_convert(int n, int size)
{
	char	*dest;
	int		signal;

	signal = -1;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	dest[size] = '\0';
	size--;
	if (n < 0)
	{
		n = -n;
		dest[0] = '-';
		signal = 0;
	}
	while (size > signal)
	{
		dest[size] = (n % 10) + 48;
		size--;
		n /= 10;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*x;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_size(n);
	if (n < 0)
		size ++;
	x = ft_convert(n, size);
	return (x);
}
/*
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = 0;
	nbr = nbr > 0;
	if (
	if (!(str = (char *)malloc(size + 1)))
		return (0);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = 48;
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}*/
