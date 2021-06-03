#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nlst;
	t_list	*plst;

	nlst = *lst;
	plst = *lst;
	while (nlst -> next)
	{
		plst = plst -> next;
		del(nlst -> content);
		free(nlst);
		nlst = plst;
	}
	*lst = NULL;
}
