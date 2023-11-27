#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

stack create_stack() {
  stack s;
  s.head = NULL;
  return s;
}

void push(stack *s, int data) {

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
    return;
  }

  // Adding the new node to top of stack
  n->next = s->head;
  s->head = n;
}

void pop(stack *s) {

  // Showing underflow if stack is empty
  if (s->head == NULL) {
    printf("Underflow\n");
    return;
  }

  // Removing a node from the stack
  node *temp = s->head;
  s->head = s->head->next;

  printf("Element being popped: %d\n", temp->data);
  free(temp);
}

void display(stack *s) {

  if (s->head == NULL) {
    printf("Empty Stack\n");
    return;
  }

  printf("the Elements in the stack are: ");
  for (node *head = s->head; head != NULL; head = head->next) {
    printf("%d ", head->data);
  }

  printf("\n");
}
