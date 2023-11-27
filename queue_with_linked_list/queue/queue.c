#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

queue create_queue() {
  queue s;
  s.head = NULL;
  return s;
}

void enqueue(queue *s, int data) {

  // Creating a new node
  node *n = (node *)malloc(sizeof(node));

  // Safety check
  if (n == NULL) {
    printf("Could not create a node\n");
    exit(1);
    return;
  }

  // Setting up the node
  n->data = data;
  n->next = NULL;

  // Assigining it to the head if its the first node
  if (s->head == NULL) {
    s->head = n;
    s->tail = n;
    return;
  }

  // Adding the new node at the end of queue and updating tail
  s->tail->next = n;
  s->tail = s->tail->next;
}

void dequeue(queue *s) {

  // Showing underflow if stack is empty
  if (s->head == NULL) {
    printf("Underflow\n");
    return;
  }

  printf("the element being removed: %d\n", s->head->data);

  // Setting head back to null if last node is being removed
  if (s->head->next == NULL) {
    free(s->head->next);
    s->head = NULL;
    s->tail = NULL;
    return;
  }

  // Removing a node from the stack
  node *temp = s->head;
  s->head = s->head->next;
  free(temp);
}

void display(queue *s) {

  if (s->head == NULL) {
    printf("Empty Queue\n");
    return;
  }

  printf("the Elements in the queue are: ");
  for (node *head = s->head; head != NULL; head = head->next) {
    printf("%d ", head->data);
  }

  printf("\n");
}
