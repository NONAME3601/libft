#include "ft_btree.h"
#include <stddef.h>

void ft_binsert(t_btree **root, void *data, int (*f)(void*, void*))
{
	t_btree *elem = malloc(sizeof(t_btree));
	int res = 0;
	if (!elem)
		return ;
	elem->data = data;
	
	while (*root->left == NULL)
	res = f(data, *root->data);
	if (res < 0)
	{
		root = 	
	}
	else if (res > 0)
	{
		
	}
}