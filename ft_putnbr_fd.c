/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:19:53 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:19:57 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	secondpart(ceros, n, inv, fd)
{
	char	c;

	n = n / 10;
	while (n % 10 == 0)
	{
		ceros++;
		n = n / 10;
	}
	while (n > 0)
	{
		inv = (inv * 10) + (n % 10);
		n = n / 10;
	}
	while (inv > 0)
	{
		c = (inv % 10) + 48;
		inv = inv / 10;
		write(fd, &c, 1);
	}
	while (ceros > 0)
	{
		write(fd, "0", 1);
		ceros--;
	}
}

void	singledigits(n, fd)
{
	char	c;

	if (n > 0 && n < 10)
		c = n + 48;
	else
	{
		c = (n * -1) + 48;
		write(fd, "-", 1);
	}
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	ld;
	int		inv;
	int		ceros;

	ceros = 0;
	inv = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else if ((n > 0 && n < 10) || (n < 0 && n > -10))
		singledigits(n, fd);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = n * -1;
		}
		ld = (n % 10) + 48;
		secondpart(ceros, n, inv, fd);
		write(fd, &ld, 1);
	}
}
