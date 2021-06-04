/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:26:48 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:26:49 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*l;
	int		b;

	a = 0;
	l = (char *)s;
	b = 0;
	if (s[0] == '\0' && c == '\0')
		return (&l[a]);
	if (s[0] == '\0')
		return (NULL);
	while (l[a] != 0)
		a++;
	if (c == 0)
		return (&l[a]);
	a--;
	while (l[a] != (char)c)
	{
		if (a <= 0)
		{
			return (NULL);
		}
		a--;
	}
	return (&l[a]);
}
