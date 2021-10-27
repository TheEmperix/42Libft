/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:03:24 by woberon           #+#    #+#             */
/*   Updated: 2021/10/24 15:03:26 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*k;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	k = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!k)
		return (NULL);
	while (s1[i])
	{
		k[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		k[i + j] = s2[j];
		j++;
	}
	k[i + j] = '\0';
	return (k);
}
