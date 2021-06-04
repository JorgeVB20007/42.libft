/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:17:42 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:17:48 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				a;
	unsigned char		*f;
	const unsigned char	*g;

	a = 0;
	f = dest;
	g = src;
	while (a < n)
	{
		f[a] = g[a];
		if (g[a] == (unsigned char)c)
		{
			return (&f[a + 1]);
		}
		a++;
	}
	return (NULL);
}
