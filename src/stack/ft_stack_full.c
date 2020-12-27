#include "ft_stack.h"

int ft_stack_full(t_stack *stack)
{
	return !stack || !stack->size; // stack && stack->size
}