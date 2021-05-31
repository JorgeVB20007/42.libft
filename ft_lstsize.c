#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	a;

	a = 0;
	while (lst != 0)
	{
		lst = lst -> next;
		a++;
	}
	return (a);
}
