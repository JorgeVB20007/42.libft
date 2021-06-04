/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:18:58 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:18:59 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*fcalc(unsigned char *f, const unsigned char *g, size_t n)
{
	size_t	a;

	if (f > g)
	{
		a = n;
		while (a > 0)
		{
			a--;
			f[a] = g[a];
		}
	}
	else
	{
		a = 0;
		while (a < n)
		{
			f[a] = g[a];
			a++;
		}
	}
	return (f);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*f;
	const unsigned char	*g;

	f = dest;
	g = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	return (fcalc(f, g, n));
}
