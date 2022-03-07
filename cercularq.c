#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int front=-1;
int rear=-1;
int q[MAX];
void enq(int ele)
{
rear=(rear+1)%MAX;
 if(rear==front)
{
 printf("queue is full");
exit (0);
}
q[++rear]=ele;
if(front==-1)
{
 front=front+1;
}
}
int dq()
{
int ele;
 if(front==-1)
{
 printf("Q is empty");
 exit(0);
}
ele=q[front];
if(front==rear)
front=rear=-1;
else
front=(front+1)%MAX;
}
void display()
{
int i;
if(front==rear)
{
 printf("q is empty");
exit(0);
}
if(front==0)
{
 for(i=front;i<rear;i++)
{
 printf("%d",q[i]);
}
}
else
{
 for(i=rear;i<MAX;i++)
  {
   printf("%d",q[i]);
  }
 }
}
void main()
{
 int ch,op1=1,ele;
  while(op1)
{
 printf("/n 1.INSERT \t2.DELET \t 3.DISPLAY ");
scanf("%d",&ch);
switch(ch)
{
 case 1:printf("\n Enter the eliment to insert\t");
        scanf("%d",&ele);
        enq(ele);
        break;
 case 2:dq();
        break;
 case 3:display();
        break;
}
printf("\n Do you want to continue(0/1)");
scanf("%d",&op1);
}
}



