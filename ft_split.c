/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihamdan <nihamdan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:46:08 by nihamdan          #+#    #+#             */
/*   Updated: 2023/03/27 09:48:45 by nihamdan         ###   ########.fr       */
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
	int			len;
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
