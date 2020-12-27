#include <stddef.h>
#include "ft_list.h"
#include "ft_stack.h"

void *ft_stack_top(t_stack *stack)
{
	if (stack && stack->head)
		return stack->head->data;
	return NULL;
}