#include "stack/stack.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  printf("Welcome to stack operations!\n");

  int choice, data;
  stack s = create_stack();

  while (1) {

    // Banner content
    printf("\nAvailable Operations:\n");
    printf("1.Add element to stack\n");
    printf("2.Remove element from stack\n");
    printf("3.Display elements in stack\n");
    printf("4.quit\n\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);
    printf("\n");

    switch (choice) {
    case 1:
      printf("enter the number to add to stack: ");
      scanf("%d", &data);
      push(&s, data);
      break;

    case 2:
      pop(&s);
      break;

    case 3:
      display(&s);
      break;

    case 4:
      exit(0);
      break;

    default:
      printf("Invalid option!\n\n");
    }
  }
}