#ifndef STACK_H
#define STACK_H

typedef struct node {
  int data;
  struct node *next;

} node;

typedef struct stack {
  node *head;

} stack;

stack create_stack();

void push(stack *s, int data);
void pop(stack *s);
void display(stack *s);

#endif