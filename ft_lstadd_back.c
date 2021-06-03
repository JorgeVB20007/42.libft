#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nlst;

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
