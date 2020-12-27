#ifndef FT_STACK
# define FT_STACK

#include <stddef.h>
#include "ft_list.h"

typedef struct		s_stack
{
	t_list			*head;
	size_t			size;
}					t_stack;

void				ft_stack_push(t_stack *stack, void* data);
void				*ft_stack_pop(t_stack *stack);
void				*ft_stack_top(t_stack *stack);
int					ft_stack_full(t_stack *stack);

#endif