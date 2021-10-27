/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:20:24 by woberon           #+#    #+#             */
/*   Updated: 2021/10/27 18:13:25 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cope;
	size_t	i;
	size_t	k;

	i = 0;
	k = 1;
	while (s1[k])
		k++;
	cope = ((char *)malloc(sizeof(char) * (k + 1)));
	if (!cope)
		return (0);
	while (s1[k] != '\0')
		k++;
	while (i <= k)
	{
		cope[i] = s1[i];
		i++;
	}
	return (cope);
}
