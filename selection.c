#include<stdio.h>
int a[10],i,j,min,temp,lim=0;
void selection();
void selection()
{
 for(i=0;i<lim;i++)
          {  
            min=i;
            for(j=i+1;j<lim;j++)
             {
                if(a[min]>a[j])
                  {
                    min=j;
                  }
             }                  
                   temp=a[i];
                   a[i]=a[min];
                   a[min]=temp;
               
           }
}
void main()
 {

	printf("enetr the limit for sorting\n");
        scanf("%d",&lim);
        printf("enter the eliments\n");
         for(i=0;i<lim;i++)
{
         scanf("%d",&a[i]);
}
        selection();
       printf("sorted eliments are\n");
       for(i=0;i<lim;i++)
       {
          printf("%d\n",a[i]);
       }
 }
