#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list	*result;

	result = malloc(sizeof(new));
	new -> next = *alst;
	*alst = new;
}
