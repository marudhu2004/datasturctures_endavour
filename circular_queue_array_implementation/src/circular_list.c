#include "circular_list.h"
#include <stdio.h>
#include <stdlib.h>

CircularQueue *create_queue(int max_size) {

  // Allocating an array
  int *arr = (int *)malloc(sizeof(int) * max_size);

  // Creating a queue
  CircularQueue *queue = (CircularQueue *)malloc(sizeof(CircularQueue));
  queue->first = -1;
  queue->last = -1;
  queue->size = 0;
  queue->max_size = max_size;
  queue->arr = arr;

  return queue;
}

int enqueue(CircularQueue *queue, int element) {

  // Check if there is space to insert elements
  if ((queue->size + 1) > queue->max_size) {
    return 0;
  }

  queue->size += 1;

  // initial entry
  if (queue->last == -1) {
    queue->first = 0;
    queue->last = 0;
  }

  // Adding a new element
  queue->arr[queue->last] = element;
  queue->last = (queue->last + 1) % queue->max_size;

  return 1;
}

int dequeue(CircularQueue *queue) {

  // Check if there is space to insert elements
  if ((queue->size - 1) < 0) {
    return 0;
  }

  queue->size -= 1;

  // Resetting the location variables while removing the last element
  if (queue->size == 0) {
    queue->first = -1;
    queue->last = -1;
  }

  // Removing the element
  queue->arr[queue->first] = 0;
  queue->first = (queue->first + 1) % queue->max_size;

  return 1;
}

void display(CircularQueue *queue) {
  int loc;
  printf("The elements of the given queue are: ");
  for (int i = 0; i < queue->size; i++) {
    loc = (queue->first + i) % queue->max_size;
    printf("%d ", queue->arr[loc]);
  }
  printf("\n");
}

int is_empty(CircularQueue *queue) { return queue->size == 0; }

int is_full(CircularQueue *queue) { return queue->size == queue->max_size; }

void free_queue(CircularQueue *queue) {
  free(queue->arr);
  free(queue);
}

int peek(CircularQueue *queue, int *status) {

  // Making sure to not peek into an empty queue
  if (is_empty(queue) == 1) {
    *status = 0;
    return 0;
  }

  *status = 1;
  return queue->arr[queue->first - 1];
}
