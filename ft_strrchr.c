/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:39:02 by spetrosy          #+#    #+#             */
/*   Updated: 2022/03/25 18:54:22 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	while (i >= 0)
	{
		if (src[i] == (char) c)
			return ((char *)&src[i]);
		i--;
	}
	return (NULL);
}
