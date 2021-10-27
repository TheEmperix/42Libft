/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:07:45 by woberon           #+#    #+#             */
/*   Updated: 2021/10/25 19:25:02 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(const char *s, unsigned	int start, size_t leng)
{
	size_t	len;

	len = 0;
	while (s[start + len] && len < leng)
	{
		len++;
	}
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	k;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_size(s, start, len);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	c = (char *)malloc(i + 1);
	if (!c)
		return (NULL);
	k = 0;
	while (len > 0 && s[start])
	{
		c[k++] = s[start++];
		len--;
	}
	c[k] = '\0';
	return (c);
}
