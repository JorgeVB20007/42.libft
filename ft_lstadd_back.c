/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvacaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:15:37 by jvacaris          #+#    #+#             */
/*   Updated: 2021/06/04 19:15:39 by jvacaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nlst;

	if (!lst || !new)
		return ;
	nlst = *lst;
	if (!nlst)
	{
		*lst = new;
		return ;
	}		
	while (nlst -> next)
		nlst = nlst -> next;
	nlst -> next = new;
}
