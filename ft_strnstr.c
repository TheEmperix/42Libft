/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:21:08 by woberon           #+#    #+#             */
/*   Updated: 2021/10/24 17:44:44 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == *needle)
		{
			j = 0;
			while (haystack[i] && haystack[i] == needle[j] && i < len)
			{
				j++;
				i++;
			}
			if (!needle[j])
				return ((char *)(haystack + i - j));
			i = i - j;
		}
		i++;
	}
	return (NULL);
}
