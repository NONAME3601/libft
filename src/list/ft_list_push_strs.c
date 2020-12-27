#include <stddef.h>
#include "ft_list.h"

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list *begin_list = NULL;

	while (size-- > 0)
	{
		ft_list_push_front(&begin_list, strs[size]);
	}
	return begin_list;
}
