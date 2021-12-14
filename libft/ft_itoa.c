/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:23:24 by nhamdan           #+#    #+#             */
/*   Updated: 2021/12/13 15:36:14 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	int	count_nbr(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
	}
	if (!n)
		return (1);
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*dst;
	int			i;
	long int	nbr;

	i = count_nbr(n);
	dst = malloc(i * sizeof(char) + 1);
	if (!dst)
		return (NULL);
	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		dst[0] = '-';
	}
	dst[i--] = '\0';
	if (n == 0)
		dst[i] = '0';
	while (nbr)
	{
		dst[i] = '0' + nbr % 10;
		nbr /= 10;
		i--;
	}
	return (dst);
}
