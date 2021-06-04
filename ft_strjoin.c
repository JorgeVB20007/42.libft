/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:21:42 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:21:44 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	secondpartjvc(char const *s1, char *ns)
{
	int	c1;

	c1 = 0;
	while (s1[c1] != 0)
	{
		ns[c1] = s1[c1];
		c1++;
	}
	return (c1);
}

char	*mpty_strngs_mngmnt(const char *s1, const char *s2)
{
	char		*rslt;
	int			a;
	const char	*sa;

	if (!s1 && !s2)
	{
		rslt = malloc(1);
		rslt = NULL;
		return (rslt);
	}
	else if (!s1)
		sa = s2;
	else
		sa = s1;
	a = 0;
	while (sa[a])
		a++;
	rslt = malloc(a + 1);
	a = 0;
	while (sa[a++])
		rslt[a] = sa[a];
	rslt[a] = 0;
	return (rslt);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		c1;
	int		c2;
	char	*ns;

	c1 = 0;
	c2 = 0;
	if (!s1 || !s2)
		return (mpty_strngs_mngmnt(s1, s2));
	while (s1[c1] != 0)
		c1++;
	while (s2[c2] != 0)
		c2++;
	ns = malloc(c1 + c2 + 1);
	if (!ns)
		return (NULL);
	c1 = secondpartjvc(s1, ns);
	c2 = 0;
	while (s2[c2] != 0)
	{
		ns[c1 + c2] = s2[c2];
		c2++;
	}
	ns[c1 + c2] = 0;
	return (ns);
}
