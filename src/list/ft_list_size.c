#include <stddef.h>
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int res = 0;

	while (begin_list)
	{
		++res;
		begin_list = begin_list->next;
	}
	
	return res;
}