#include "queue.h"
#include <unistd.h>
#include <string.h>

// Conta o numero de elementos na fila
// Retorno: numero de elementos na fila
int
queue_size(queue_t *queue)
{
  int queueSize;
  int flag = 0;
  const char *msgQueueNull = "Erro: queue esta NULL";
  if(queue == NULL){
    write(2, msgQueueNull, strlen(msgQueueNull));
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
