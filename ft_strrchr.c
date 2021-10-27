/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:21:21 by woberon           #+#    #+#             */
/*   Updated: 2021/10/24 15:07:49 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*k;

	k = s;
	while (*s)
		s++;
	while (k <= s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		--s;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
