#include<stdio.h>
#include<stdlib.h>
typedef struct node * lstptr;
struct node
{
 int data;
 lstptr link;
};
lstptr First=NULL;
lstptr getnode()
{
 lstptr ptr;
 ptr=(lstptr)malloc(sizeof(struct node));
 return ptr;
}
void insertBegin(int ele)
{
 lstptr new;
 new=getnode();
 new->data=ele;
 new->link=NULL;
  if(First!=NULL)
   {
    new->link=First;
   }
    First=new;
}
void insertEnd(int ele)
{
 lstptr new,temp;
 new=getnode();
 new->data=ele;
 new->link=NULL;
  if(First==NULL)
   {
    new->link=First;
    First=new;
   }
temp=First;
while(temp->link!=NULL)
{
 temp=temp->link;
}
temp->link=new;
}
void deletBegin()
{
 lstptr temp;
    if(First==NULL)
     {
      printf("!! E mpt Y !!");
      exit(0);
     }
else{
  temp=First;
  First=First->link;
  free(temp);
    }     
}
void deletEnd()
{
 lstptr temp,prev;
 if(First==NULL)
     {
      printf("!! E mpt Y !!");
      exit(0);
     }
else
{
 temp=prev=First;
while(temp->link!=NULL)
{ 
 prev=temp;
temp=temp->link;
}
prev->link=NULL;
free(temp);
}
}
lstptr deletSpecified(int ele)
{
lstptr temp,prev;
temp=First;
if(First==NULL)
{
 printf("E mpt Y");
exit(0);
}
else if(First->data==ele)
{
 if(First->link!=NULL)
 {
  First=First->link;
 }
else
First=NULL;
}
else
{
 while(temp->data!=ele&&temp->link!=NULL)
{
 prev=temp;
 temp=temp->link;
}
if(temp->link==NULL && temp->data!=ele)
{
 printf("Specfide Item not Found\n");
return(First);
}
else if(temp->link!=NULL)
{
 prev->link=temp->link;
}
else
{
 prev->link=NULL;
}
free(temp);
return(First);
}
}
void display()
{
lstptr temp;
 if(First==NULL)
  {
    printf("\n !! E mpt Y !!");
   exit(0);
  }
  temp=First;
  while(temp->link!=NULL)
  {
    printf("%d\t",temp->data);
    temp=temp->link;
  }
    printf("%d\t",temp->data);
 }
void main()
{ 
int opt=1, ele,ch;
while(opt)
{
printf("\n 1.Insert begin \t 2.Insert End \t 3.Delete begin \t 4.Delete End \t 5.Delete at specifide\t 6.Display\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
 case 1: printf("\n Enter element\n");
         scanf("%d",&ele);
         insertBegin(ele);
         break;
case 2: printf("\n Enter element");
         scanf("%d",&ele);
         insertEnd(ele);
         break;
case 3: deletBegin();
          break;
case 4: deletEnd();
          break;
case 5: printf("\n Enter the delete element");
          scanf("%d",&ele);
         deletSpecified(ele);
          break;

case 6:display();
       break;
 }
printf("dou you want to continue (1/0)");
scanf("%d",&opt);
}
}
