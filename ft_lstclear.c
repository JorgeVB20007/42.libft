/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:16:05 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:16:08 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nlst;
	t_list	*plst;

	if (!lst || !del)
		return ;
	nlst = *lst;
	plst = *lst;
	while (nlst)
	{
		plst = plst -> next;
		del(nlst -> content);
		free(nlst);
		nlst = plst;
	}
	*lst = NULL;
}
