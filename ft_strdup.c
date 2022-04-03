/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 12:40:06 by spetrosy          #+#    #+#             */
/*   Updated: 2022/03/28 16:46:26 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		x;
	int		i;
	char	*p;

	i = ft_strlen(s1);
	p = (char *) malloc((i * sizeof(char)) + 1);
	x = 0;
	while (s1[x])
	{
		p[x] = s1[x];
		x++;
	}
	p[x] = '\0';
	return (p);
}
