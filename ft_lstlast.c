#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = NULL;
	while (lst != 0)
	{
		ptr = lst;
		lst = lst -> next;
	}
	return (ptr);
}
