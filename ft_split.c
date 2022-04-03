/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:43:03 by spetrosy          #+#    #+#             */
/*   Updated: 2022/04/03 19:18:26 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_retstrs(const char *str, char b)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == b)
			i++;
		if (str[i])
			j++;
		while (str[i] && str[i] != b)
			i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	start;
	size_t	finish;
	size_t	i;

	arr = (char **) malloc((ft_retstrs(s, c) + 1) * sizeof(char *));
	if (!s || !arr)
		return (0);
	i = 0;
	start = 0;
	while (i < ft_retstrs(s, c))
	{
		while (s[start] == c)
			start++;
		finish = start;
		while (s[finish] != c && s[finish])
			finish++;
		arr[i] = ft_substr(s + start, 0, finish - start);
		start = finish;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
