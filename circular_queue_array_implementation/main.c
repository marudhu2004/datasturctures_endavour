#include "src/circular_list.h"
#include <stdio.h>

#define QUEUE_SIZE 6

int main(void) {

  CircularQueue *queue = create_queue(QUEUE_SIZE);

  printf("The enqueue was %d\n", enqueue(queue, 10));
  printf("The enqueue was %d\n", enqueue(queue, 20));
  printf("The enqueue was %d\n", enqueue(queue, 30));
  printf("The enqueue was %d\n", enqueue(queue, 40));
  printf("The enqueue was %d\n", enqueue(queue, 50));
  printf("The enqueue was %d\n", enqueue(queue, 60));
  printf("The enqueue was %d\n", enqueue(queue, 70));
  printf("The enqueue was %d\n\n", enqueue(queue, 50));
  printf("is the queue full: %d\n", is_full(queue));
  printf("is the queue empty: %d\n\n", is_empty(queue));
  
  printf("The size of the current queue is: %d\n", queue->size);

  display(queue);
  printf("\n");

  printf("The dequeue was %d\n", dequeue(queue));
  display(queue);
  printf("\n");

  printf("The enqueue was %d\n", enqueue(queue, 100));
  display(queue);
  printf("\n");

  printf("The dequeue was %d\n", dequeue(queue));
  printf("The dequeue was %d\n", dequeue(queue));
  printf("The dequeue was %d\n", dequeue(queue));
  printf("The dequeue was %d\n", dequeue(queue));
  printf("The dequeue was %d\n", dequeue(queue));
  printf("The dequeue was %d\n\n", dequeue(queue));
  printf("The dequeue was %d\n\n", dequeue(queue));
  display(queue);
  printf("\n");

  printf("The size of the queue is: %d\n", queue -> size);
  free_queue(queue);

  return 0;
}