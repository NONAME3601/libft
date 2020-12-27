#include "ft_list.h"
#include "ft_queue.h"

int ft_enqueue(t_queue *queue, void * data)
{
	if (queue && queue->size)
	{
		ft_list_push_back(&queue->head, data);
		queue->size--;
		return 1;
	}
	return 0;
}