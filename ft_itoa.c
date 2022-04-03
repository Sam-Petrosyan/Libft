/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:33:21 by spetrosy          #+#    #+#             */
/*   Updated: 2022/04/01 14:28:33 by spetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int nb)
{
	int	i;
	int	j;

	if (nb > 0)
	{
		i = 0;
		while (nb > 0)
		{
			nb = nb / 10;
			i++;
		}
	}
	else if (nb < 0)
	{
		i = 1;
		j = -1 * nb;
		while (j > 0)
		{
			j = j / 10;
			i++;
		}
	}
	else
		i = 1;
	return (i);
}

static char	*ft_retstr(char *str, int n)
{
	int		a;

	a = ft_len(n);
	if (n < 0)
	{
		n *= -1;
		while (a > 1)
		{
			str[a - 1] = n % 10 + '0';
			n = n / 10;
			a--;
		}
	str[a - 1] = '-';
	}
	else
	{
		while (a > 0)
		{
			str[a - 1] = n % 10 + '0';
			n = n / 10;
			a--;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		a;

	a = ft_len(n);
	s = (char *) malloc((a + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[a] = '\0';
	if (n == -2147483648)
	{
		n = 2147483647;
		a = 11;
		while (a > 1)
		{
			s[a - 1] = n % 10 + '0';
			n = n / 10;
			a--;
		}
		s[10] = s[10] + 1;
		s[a - 1] = '-';
	}
	else
		ft_retstr(s, n);
	return (s);
}
