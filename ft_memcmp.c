/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:18:57 by woberon           #+#    #+#             */
/*   Updated: 2021/10/19 16:18:58 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*k;
	unsigned char	*l;

	k = (unsigned char *)s1;
	l = (unsigned char *)s2;
	if (!n)
		return (0);
	while ((--n) && (*k == *l))
	{
		k++;
		l++;
	}
	return ((int)(*k) - (int)(*l));
}
