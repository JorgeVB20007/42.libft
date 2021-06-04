/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:27:02 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:27:05 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	beggining(char const *s1, char const *set)
{
	int	a;
	int	b;

	a = 0;
	while (s1[a] != 0)
	{
		b = 0;
		while (set[b] != 0)
		{
			if (s1[a] == set[b])
			{
				a++;
				break ;
			}
			else
				b++;
		}
		if (set[b] == 0)
			return (a);
	}
	return (-1);
}

int	ending(char const *s1, char const *set, int size)
{
	int	a;
	int	b;

	a = size - 1;
	while (s1[a] != 0)
	{
		b = 0;
		while (set[b] != 0)
		{
			if (s1[a] == set[b])
			{
				a--;
				break ;
			}
			else
				b++;
		}
		if (set[b] == 0)
			return (a + 1);
	}
	return (a + 1);
}

char	*strtrimproblemchecker(int a)
{
	char	*result;

	a = 0;
	result = malloc(1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	char	*result;
	int		loc;

	size = 0;
	loc = 0;
	if (!s1)
		return (NULL);
	if (beggining(s1, set) < 0)
		return (strtrimproblemchecker(0));
	while (s1[size] != 0)
		size++;
	result = malloc(ending(s1, set, size) - beggining(s1, set) + 1);
	if (!result)
		return (NULL);
	while (loc + beggining(s1, set) < ending(s1, set, size))
	{
		result[loc] = s1[loc + beggining(s1, set)];
		loc++;
	}
	result[loc] = 0;
	return (result);
}
