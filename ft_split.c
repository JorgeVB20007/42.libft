/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:20:37 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:20:40 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_rows(char const *s, char c)
{
	int	a;
	int	h;

	a = 0;
	h = 0;
	while (s[a] == c)
		a++;
	while (s[a] != '\0')
	{
		if (s[a] == c)
		{
			h++;
			a++;
			while (s[a] == c)
				a++;
		}
		else
			a++;
	}
	if (s[a - 1] == c)
		return (h + 1);
	else
		return (h + 2);
}

int	row_locator(char const *s, char c, int a, int b)
{
	int	d;

	d = 0;
	while (d < a)
	{
		if (s[b] == c)
		{
			d++;
			b++;
			while (s[b] == c)
			{
				b++;
			}
		}
		else
			b++;
	}
	return (b);
}

char	*column_gen(char const *s, char c, int a)
{
	char	*result;
	int		b;
	int		e;

	b = 0;
	while (s[b] == c)
	{
		b++;
	}
	b = row_locator(s, c, a, b);
	e = 0;
	while (s[e + b] != c && s[e + b] != 0)
		e++;
	result = malloc(e + 1);
	e = 0;
	while (s[b + e] != c && s[b + e] != 0)
	{
		result[e] = s[b + e];
		e++;
	}
	result[e] = '\0';
	return (result);
}

char	**split_error_mngmnt(char const *s, char c)
{
	int		a;
	char	**result;

	a = 0;
	result = malloc(sizeof(char *) + (!c * sizeof(char *)));
	if (!result)
		return (NULL);
	if (s[0] != '\0')
		result[a++] = ft_strdup(s);
	result[a] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		rows;
	char	**result;
	int		a;

	a = 0;
	if (!s)
		return (NULL);
	if (s[0] == '\0' || c == '\0')
		return (split_error_mngmnt(s, c));
	rows = count_rows(s, c);
	result = malloc(sizeof(char *) * rows);
	if (!result)
		return (NULL);
	while (a < rows - 1)
	{
		result[a] = column_gen(s, c, a);
		a++;
	}
	result[rows - 1] = NULL;
	return (result);
}
