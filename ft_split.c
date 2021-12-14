/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:48:12 by nhamdan           #+#    #+#             */
/*   Updated: 2021/12/13 13:19:33 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cpt_sep(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	size_t		i;
	const char	*start;
	char		**split;

	i = 0;
	if (!s)
		return (NULL);
	split = malloc(((cpt_sep(s, c)) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		start = s;
		len = 0;
		while (*s && *s != c && len++ != -42)
			s++;
		if (*(s - 1) != c)
			split[i++] = ft_substr(start, 0, len);
	}
	split[i] = 0;
	return (split);
}
