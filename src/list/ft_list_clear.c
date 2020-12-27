#include <stdlib.h>
#include "ft_list.h"

void ft_list_clear(t_list **begin_list, void(*free_fct)(void*))
{
	t_list *buf;
	while(*begin_list != NULL)
	{
		buf = (*begin_list)->next;
		free_fct((*begin_list)->data);
		free(*begin_list);
		*begin_list = buf;
	}
	*begin_list = NULL;
}