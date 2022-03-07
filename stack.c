#include<stdio.h>
#include<stdlib.h>
#define size 100
int stack[size],top=-1;
void push(int[],int);
void display(int[]);
void pop(int[]);
void push(int stack[],int item)
{
  if(top == size-1)
  {
printf("Stack is full\n");
    return;
  }
  top++;
  stack[top]=item;
}
void pop(int stack[])
{
  int ditem;
if(top==-1)
{
printf("Stack is empty\n");
}
ditem=stack[top];
  top--;
  printf("Item is deleted"" %d",ditem);
}
void display(int stack[])
{
  int i;
   if(top==-1)
   {
    printf("Stack is empty");
     return;
   }
  printf("Stack elements are: ");
  for(i=top;i>=0;i--)
  {
    printf(" %d",stack[i]);
}
}
void main()
{
  int ch,item;
  while(1)
  {
  printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
  printf("Enter your choice\n");
  scanf(" %d",&ch);
    switch(ch)
    {
      case 1: printf("Enter the element to be inserted\n");
              scanf(" %d",&item);
                     push(stack,item);
                     printf("Item is inserted");
                     break;
                     case 2:pop(stack);
                     break;
                     case 3:display(stack);
                     break;
                     case 4:exit(0);
                     break;
                     default:printf("Wrong Choice\n");
                     break;
     }
  }
}
