/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:18:41 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:18:43 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				a;
	unsigned char		*f;
	const unsigned char	*g;

	a = 0;
	f = dest;
	g = src;
	if (f == NULL && g == NULL)
		return (NULL);
	while (a < n)
	{
		f[a] = g[a];
		a++;
	}
	return (f);
}
