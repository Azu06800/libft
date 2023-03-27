/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:45:15 by nihamdan          #+#    #+#             */
/*   Updated: 2023/03/27 09:48:45 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	d = (char *) dst;
	s = (char *) src;
	if (!dst || !src)
		return (NULL);
	if (d > s)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
