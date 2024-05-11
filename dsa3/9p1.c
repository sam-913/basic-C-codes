#include <stdio.h>
#define SIZE 6

void enQ(int);
void deQ();
void display();
int items[SIZE], front = -1, rear = -1;

void enQ (int value)
{
  if (rear == SIZE - 1)
    printf("\nQueue is Full ! ");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("\nInserted : %d", value);
  }
}

void deQ ()
{
  if (front == -1)
    printf("\nQueue is Empty !");
  else {
    printf("\nDeleted : %d\n", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

void display()
{
  if (rear == -1)
    printf("\nQueue is Empty !");
  else {
    int i;
    printf("\nQueue elements are :\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}

void peek ()
{
   return items[front];
}

void isFull()
{
    
}

int main() 
{

  deQ();
  for (int i =0;i<=6;i++)
  {
    enQ (i);
  }
  display();
  deQ ();
  display();
  peek();
  isFull();

  return 0;
}