#include <stdlib.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
	t_list *node = malloc(sizeof(t_list));

	node->data = data;
	node->next = NULL;
	return node;
}