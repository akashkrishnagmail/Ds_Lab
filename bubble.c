#include<stdio.h>
void bublesort();
int a[40],i=0,j=0,n,temp;
void bublesort()
{
     for(i=0;i<n;i++)
	 {
	  for(j=0;j<n-i-1;j++)
	    {
	      if(a[j]>a[j+1])
		{
 		  temp=a[j];
		  a[j]=a[j+1];
		  a[j+1]=temp;
		 }
             }
          }
}
void main()
{
 
 printf("enter the limit for sorting\n");
 scanf("%d",&n);
 printf("enter the eliments\n");
 	for(i=0;i<n;i++)
	 {
 	   scanf("%d",&a[i]);
	 }
bublesort();
printf("bubble sorted eliments are\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}

