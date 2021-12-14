/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:28:19 by nhamdan           #+#    #+#             */
/*   Updated: 2021/12/13 18:34:25 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	size_t	ltot;
	char	*dst;

	if (!s1 || !s2)
		return NULL;
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	ltot = ls1 + ls2 + 1;
	dst = malloc(sizeof(char) * ltot);
	if (!dst)
		return (NULL);
	ft_memmove(dst, s1, ls1);
	ft_memmove(dst + ls1, s2, ls2);
	dst[ltot - 1] = '\0';
	return (dst);
}
