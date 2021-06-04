/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:25:09 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:25:12 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	c;
	size_t	c2;
	size_t	c3;

	c = 0;
	c2 = 0;
	c3 = 0;
	c = ft_strlen(dst);
	c3 = ft_strlen(src);
	if (n < c + 1)
		return (c3 + n);
	else
	{
		c3 = c3 + c;
		while (c + 1 < n && src[c2] != 0)
		{
			dst[c] = src[c2];
			c++;
			c2++;
		}	
		dst[c] = 0;
		return (c3);
	}
}
