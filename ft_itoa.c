/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:43:11 by nihamdan          #+#    #+#             */
/*   Updated: 2023/03/27 09:48:45 by nihamdan         ###   ########.fr       */
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
