#include "queue/queue.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  printf("Welcome to stack operations!\n");

  int choice, data;
  queue q = create_queue();

  while (1) {

    // Banner content
    printf("\nAvailable Operations:\n");
    printf("1.Add element to queue\n");
    printf("2.Remove element from queue\n");
    printf("3.Display elements in queue\n");
    printf("4.quit\n\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);
    printf("\n");

    switch (choice) {
    case 1:
      printf("enter the number to add to queue: ");
      scanf("%d", &data);
      enqueue(&q, data);
      break;

    case 2:
      dequeue(&q);
      break;

    case 3:
      display(&q);
      break;

    case 4:
      exit(0);
      break;

    default:
      printf("Invalid option!\n\n");
    }
  }
}