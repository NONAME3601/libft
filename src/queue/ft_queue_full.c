#include "ft_list.h"
#include "ft_queue.h"

int ft_queue_full(t_queue *queue)
{
		return !queue || !queue->size; // queue && queue->size
}