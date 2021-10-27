/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:06:32 by woberon           #+#    #+#             */
/*   Updated: 2021/10/24 15:06:33 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*k;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	else if (!f)
		return (ft_strdup(s));
	k = ft_strdup(s);
	if (!k)
		return (k = NULL);
	while (s[i])
	{
		k[i] = (*f)(i, s[i]);
		i++;
	}
	return (k);
}
