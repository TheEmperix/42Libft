/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:01:59 by woberon           #+#    #+#             */
/*   Updated: 2021/10/24 15:02:01 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *) dst;
	s = (const char *) src;
	if ((char *) dst == NULL && (char *) src == NULL)
		return ((void *) dst);
	if (s < d)
		while (len--)
			d[len] = s[len];
	else
		while (len--)
			*d++ = *s++;
	return ((void *) dst);
}
