#include "queue.h"
#include <stdio.h>

// Conta o numero de elementos na fila
// Retorno: numero de elementos na fila
int
queue_size(queue_t *queue)
{
  int queueSize;
  int flag = 0;
  if(queue == NULL){
    fprintf(stderr, "INFO: queue value => NULL\n");
    return 0;
  }

  while(flag == 0){
    if(queue->next)
      queueSize += 1;
    else
      flag = 1;
  }
  return queueSize;
}

void
queue_print (char *name,
	     queue_t *queue,
	     void print_elem (void*))
{

}

int
queue_append (queue_t **queue,
	      queue_t *elem)
{
  
}


int
queue_remove (queue_t **queue,
	      queue_t *elem)
{

}
