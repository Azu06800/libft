/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:46:26 by nihamdan          #+#    #+#             */
/*   Updated: 2023/03/27 09:48:45 by nihamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;

	copy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (copy == NULL)
		return (NULL);
	else
		ft_memcpy(copy, s1, ft_strlen(s1) + 1);
	return (copy);
}
