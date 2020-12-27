#include "ft_list.h"
#include "ft_stack.h"
#include <stdlib.h>

void *ft_stack_pop(t_stack *stack)
{
	void *data = NULL;
	if (stack)
	{
		t_list *top = ft_list_pop_front(&stack->head);
		if (top)
		{
			data = top->data;
			free(top);
			(stack->size)++;
		}		
	}
	return data;
}