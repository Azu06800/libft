/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 07:38:28 by nhamdan           #+#    #+#             */
/*   Updated: 2021/12/09 12:47:36 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;

	if (!dst || !src)
		return (NULL);
	t1 = (unsigned char *)src;
	t2 = (unsigned char *)dst;
	while (n > 0)
	{
		*t2++ = *t1++;
		n--;
	}
	return (dst);
}
