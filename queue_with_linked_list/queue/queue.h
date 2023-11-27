#ifndef QUEUE_H
#define QUEUE_H

typedef struct node {

  int data;
  struct node *next;

} node;

typedef struct queue {

  node *head;
  node *tail;

} queue;

queue create_queue();

void enqueue(queue *s, int data);
void dequeue(queue *s);
void display(queue *s);

#endif