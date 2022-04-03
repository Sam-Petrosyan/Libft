/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:42:51 by spetrosy          #+#    #+#             */
/*   Updated: 2022/04/01 16:44:18 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_retmalloc(const char *a, int b, int c)
{
	char	*str;
	int		i;

	str = malloc((c - b + 2) * sizeof(char));
	i = 0;
	if (!str)
		return (NULL);
	while (b <= c)
	{
		str[i] = a[b];
		b++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	c;
	int	i;
	int	x;

	c = ft_strlen(s1) - 1;
	i = 0;
	x = 0;
	while (set[x])
	{
		if (s1[i] == set[x] && s1[i++])
			x = 0;
		else
			x++;
	}
	x = 0;
	while (set[x] && i <= c)
	{
		if (s1[c] == set[x] && s1[c--])
			x = 0;
		else
			x++;
	}
	return (ft_retmalloc(s1, i, c));
}
