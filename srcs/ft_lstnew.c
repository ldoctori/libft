#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list_elem;

	list_elem = malloc(sizeof(t_list) + 1);
	if (!list_elem)
		return (0);
	list_elem->content = content;
	list_elem->next = 0;
	return (list_elem);
}
