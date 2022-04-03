/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:33:47 by spetrosy          #+#    #+#             */
/*   Updated: 2022/04/03 18:59:48 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*c;

	i = 0;
	if (start >= ft_strlen(s))
	{
		c = (char *) malloc(sizeof(char));
		c[0] = '\0';
		return (c);
	}
	else if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	c = (char *) malloc((len + 1) * sizeof(char));
	if (!c)
		return (NULL);
	while (i < len)
	{
		c[i] = s[start];
		start++;
		i++;
	}
	c[i] = '\0';
	return (c);
}
