/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:21:27 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:21:28 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		cntr;
	int		cntr2;
	char	*s2;

	cntr = 0;
	cntr2 = 0;
	while (s1[cntr] != 0)
		cntr++;
	s2 = malloc(cntr + 1);
	if (!s2)
		return (NULL);
	while (cntr2 < cntr)
	{
		s2[cntr2] = s1[cntr2];
		cntr2++;
	}
	s2[cntr2] = 0;
	return (s2);
}
