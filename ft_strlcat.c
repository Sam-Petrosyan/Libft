/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:25:38 by spetrosy          #+#    #+#             */
/*   Updated: 2022/03/25 17:34:30 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	x = dstlen;
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	i = 0;
	while (i < dstsize - x - 1 && src[i])
	{
		dest[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dest[dstlen] = '\0';
	return (x + srclen);
}
