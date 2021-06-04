/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:26:24 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:26:25 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	finalreturning(const char *s1, const char *s2, size_t m, size_t n)
{
	if (m == n)
		return (0);
	if (s1[m] == 0 && s2[m] != 0)
		return (-1);
	if (s1[m] != 0 && s2[m] == 0)
		return (1);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			m;
	unsigned char	*t1;
	unsigned char	*t2;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	m = 0;
	if (!n)
		return (0);
	while (m < n && s1[m] != 0 && s2[m] != 0)
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
	return (finalreturning(s1, s2, m, n));
}
