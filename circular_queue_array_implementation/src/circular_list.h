/*

author: Marudhu Paandian K
date: 10-16-2023

the below implements the ADT circular queues using an array.

*/


#ifndef circular_list
#define circular_list

typedef struct CircularQueue {
  int *arr;
  int first;
  int last;
  int max_size;
  int size;
} CircularQueue;

CircularQueue *create_queue(int max_size);
void free_queue(CircularQueue *queue);

int enqueue(CircularQueue *queue, int element);
int dequeue(CircularQueue *queue);

int is_empty(CircularQueue *queue);
int is_full(CircularQueue *queue);

void display(CircularQueue *queue);
int peek(CircularQueue *queue, int *status);

#endif