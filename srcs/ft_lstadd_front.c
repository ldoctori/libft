#include "../includes/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		(*lst)->next = 0;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
