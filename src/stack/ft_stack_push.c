#include "ft_list.h"
#include "ft_stack.h"

void ft_stack_push(t_stack *stack, void* data)
{
	if (stack && stack->size)
	{
		ft_list_push_front(&(stack->head), data);
		(stack->size)--;
	}
}