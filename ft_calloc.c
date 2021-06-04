/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:13:35 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:13:38 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	cntr;

	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	cntr = 0;
	while (cntr < count * size)
	{
		memory[cntr] = 0;
		cntr++;
	}
	return (memory);
}
