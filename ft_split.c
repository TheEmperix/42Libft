/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:03:15 by woberon           #+#    #+#             */
/*   Updated: 2021/10/27 16:49:04 by woberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char *s, char c)
{
	size_t	count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	ft_free(char **res, int j)
{
	int	i;

	i = 0;
	while (i <= j)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static void	*ft_del(char *st, char const *s, char **res, int j)
{
	if (st != s)
	{
		res[j] = ft_substr(st, 0, s - st);
		if (!res[j])
		{
			ft_free(res, j);
			return (NULL);
		}
	}
	return (NULL);
}

static char	**ft_search(char const *s, char c, char **res, char *st)
{
	int	j;

	j = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (st != s)
			{
				res[j] = ft_substr(st, 0, s - st);
				if (!res[j])
				{
					ft_free(res, j);
					return (NULL);
				}
				j++;
			}
			st = (char *)s + 1;
		}
		s++;
	}
	ft_del(st, s, res, j);
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t		t;
	char		*st;
	char		**res;

	if (!s)
		return (NULL);
	t = ft_count((char *)s, c);
	res = (char **)malloc(sizeof(char *) * (t + 1));
	if (!res)
		return (NULL);
	st = (char *)s;
	if (NULL == ft_search(s, c, res, st))
		return (NULL);
	res[t] = NULL;
	return (res);
}
