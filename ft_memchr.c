/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:18:01 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:18:05 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			f;
	unsigned char	*b;

	b = (unsigned char *)s;
	f = 0;
	while (f < n)
	{
		if (b[f] == (unsigned char)c)
		{
			return (&b[f]);
		}
		f++;
	}
	return (0);
}
