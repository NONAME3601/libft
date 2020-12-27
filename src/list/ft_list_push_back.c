#include <stddef.h>
#include "ft_list.h"


void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *node = ft_create_elem(data);
	t_list *last = ft_list_last(*begin_list);
	
	if (last != NULL)
	{
		last->next = node;
	}
	else 
	{
		*begin_list = node;		
	}
}