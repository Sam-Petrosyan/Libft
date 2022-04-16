/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:00:43 by spetrosy          #+#    #+#             */
/*   Updated: 2022/04/14 19:25:42 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*s;
	char		*c;

	s = (char *)dest;
	c = (char *)src;
	i = 0;
	while (i < n)
	{
		s[i] = c[i];
		i++;
	}
	return (s);
}
