/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:07:36 by woberon           #+#    #+#             */
/*   Updated: 2021/10/25 21:39:52 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	i;
	char	*r;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	s = 0;
	i = ft_strlen(s1);
	while (check_set(s1[s], set) == 0)
		s++;
	if (s == ft_strlen(s1))
	{
		r = ft_strdup("");
		if (!r)
			return (NULL);
		else
			return (r);
	}
	while (check_set(s1[i - 1], set) == 0)
		i--;
	r = ft_substr(s1, s, i - s);
	return (r);
}
