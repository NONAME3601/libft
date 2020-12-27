#ifndef FT_QUEUE_H
# define FT_QUEUE_H

#include <stddef.h>

typedef struct	s_queue
{
	t_list		*head;
	size_t		size; 
}				t_queue;


int 	ft_enqueue(t_queue *queue, void * data);
int		ft_dequeue(t_queue *queue, void (*f)(void*));
int 	ft_queue_full(t_queue *queue);

#endif