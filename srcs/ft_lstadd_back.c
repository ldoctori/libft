#include "../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	if (!(*lst))
	{
		*lst = new;
		(*lst)->next = 0;
	}
	last = ft_lstlast(*lst);
	last->next = new;
	last->next->next = 0;
}
