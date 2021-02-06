/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:45:32 by snunez            #+#    #+#             */
/*   Updated: 2021/02/06 16:40:45 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		len_nb(int nb)
{
	size_t	space;

	space = 0;
	if (nb == 0)
	{
		space++;
		return (space);
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		space++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		space++;
	}
	return (space);
}

long int	isnegative(char *s, long int nb)
{
	*(s) = '-';
	nb = nb * (-1);
	return (nb);
}

char		*ft_itoa(int c)
{
	char			*num;
	size_t			i;
	long int		nb;

	nb = c;
	i = len_nb(nb);
	if (!(num = (char *)malloc((i + 1) * sizeof(char))))
		return (NULL);
	*(num + i) = '\0';
	i--;
	if (nb == 0)
	{
		*(num) = '0';
		return (num);
	}
	if (nb < 0)
		nb = isnegative(num, nb);
	while (nb >= 10)
	{
		*(num + i) = (nb % 10 + '0');
		nb = nb / 10;
		i--;
	}
	*(num + i) = nb + '0';
	return (num);
}
