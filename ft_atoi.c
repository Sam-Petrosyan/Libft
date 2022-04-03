/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:46:03 by spetrosy          #+#    #+#             */
/*   Updated: 2022/03/28 14:26:14 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	a;
	int	nb;

	a = 1;
	i = 0;
	nb = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		a = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (int)str[i] - 48;
		i++;
	}
	return (nb * a);
}
