/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:26:09 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:26:11 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	char			*result;

	if (!s)
		return (NULL);
	a = ft_strlen(s);
	result = malloc (a + 1);
	if (!result)
		return (NULL);
	result[a] = 0;
	if (s[0] == 0)
		return (result);
	a--;
	while (a > 0)
	{
		result[a] = s[a];
		a--;
	}
	result[a] = s[a];
	while (s[a] != 0)
	{
		result[a] = (f)(a, s[a]);
		a++;
	}
	return (result);
}
