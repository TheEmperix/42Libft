/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:17:29 by woberon           #+#    #+#             */
/*   Updated: 2021/10/19 16:17:31 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*k;
	int		q;
	int		i;

	q = count * size;
	i = 0;
	k = malloc(q);
	if (!(k))
		return (0);
	while (q)
	{
		k[i] = 0;
		i++;
		q--;
	}
	return (k);
}
