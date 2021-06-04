/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:26:35 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:26:36 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hs;
	char	*nl;
	size_t	contr;
	int		subcontr;

	hs = (char *)haystack;
	nl = (char *)needle;
	contr = 0;
	if (nl[0] == 0)
		return (hs);
	while (contr < len && hs[contr] != 0)
	{
		subcontr = 0;
		if (hs[contr] == nl[0])
		{
			while (nl[subcontr] == hs[contr + subcontr] && nl[subcontr] != 0)
				subcontr++;
			if (contr + subcontr > len)
				return (NULL);
			if (nl[subcontr] == 0)
				return (&hs[contr]);
		}
		contr++;
	}
	return (NULL);
}
