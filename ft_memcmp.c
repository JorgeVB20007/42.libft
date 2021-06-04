/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:18:29 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:18:30 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			m;
	unsigned char	*t1;
	unsigned char	*t2;

	m = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while (m < n)
	{
		if (t1[m] == t2[m])
		{
			m++;
		}
		else
		{
			return (t1[m] - t2[m]);
		}
	}
	return (0);
}
