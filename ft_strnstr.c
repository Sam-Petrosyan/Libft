/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:25:40 by spetrosy          #+#    #+#             */
/*   Updated: 2022/03/28 16:25:36 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	x;

	x = 0;
	i = 0;
	if (s2[0] == '\0')
		return ((char *)&s1[0]);
	while (s1[i] && i < n)
	{
		while (s1[i + x] && s1[i + x] == s2[x] && i + x < n)
		{
			x++;
			if (s2[x] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
