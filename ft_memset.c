/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 18:29:47 by jvacaris          #+#    #+#             */
/*   Updated: 2021/05/17 18:30:15 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	a;
	char	*e;

	a = 0;
	e = b;
	while (a < len)
	{
		e[a] = c;
		a++;
	}
	return (e);
}

/*
int main()
{
	char str[50] = "qwertyuiopasdfghjklz";
	char str2[50] = "qwertyuiopasdfghjklz";
	char *ptr;
	char *ptr2;
	int n = 0;

	ptr = &str[0];
	ptr2 = &str2[0];
	while (n < 10000000)
	{
		memset(ptr, 800, 40);
		ft_memset(ptr2, 800, 40);
		if (*ptr != *ptr2)
		{
			printf("ERROR at %d", n);
		}
		n++;
	}
	printf("Orig %s\n", memset(ptr, 42, 48));
	printf("User %s\n", ft_memset(ptr2, 42, 48));
	printf("Orig %s\n", str);
	printf("User %s\n", str2);

}
*/