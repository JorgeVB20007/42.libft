/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:27:17 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:27:19 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*secondpartjvb(char *t, char const *s, unsigned int start, int max)
{
	int	r;

	r = 0;
	while (r < max)
	{
		t[r] = s[r + start];
		r++;
	}
	t[r] = 0;
	return (t);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	int		r;
	int		max;

	r = 0;
	if (!s)
		return (NULL);
	r = ft_strlen(s);
	if (start > (unsigned int)r)
	{
		t = malloc(1);
		if (!t)
			return (NULL);
		t[0] = '\0';
		return (t);
	}
	if (len > r - start)
		max = r - start;
	else
		max = len;
	t = malloc(max + 1);
	if (!t)
		return (NULL);
	return (secondpartjvb(t, s, start, max));
}
