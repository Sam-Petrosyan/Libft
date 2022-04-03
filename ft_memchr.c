/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:02:16 by spetrosy          #+#    #+#             */
/*   Updated: 2022/03/28 12:45:03 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	char	*a;
	size_t	i;

	a = (void *)arr;
	i = 0;
	if (!a)
		return (0);
	while (i < n)
	{
		if (a[i] == (char) c)
			return ((char *)&a[i]);
		i++;
	}
	return (NULL);
}
