#include "ft_list.h"
#include "ft_queue.h"
#include <stdlib.h>

int	ft_dequeue(t_queue *queue, void (*f)(void*))
{
	if (queue && queue->size)
	{
		t_list *t = ft_list_pop_front(&queue->head);
		if (t)
		{
			f(t->data);
			free(t);
		}
		queue->size++;
		return 1;
	}
	else
	{
		return 0;
	}
}