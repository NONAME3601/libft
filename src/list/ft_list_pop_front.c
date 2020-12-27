#include <stddef.h>
#include "ft_list.h"

t_list	*ft_list_pop_front(t_list **begin_list)
{
	t_list *buff = NULL;
	t_list *front = NULL;
	
	if (*begin_list)
		buff = (*begin_list)->next;
	front = *begin_list;
	*begin_list = buff;
	return front;
}