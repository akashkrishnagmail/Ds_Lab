#include<stdio.h>
#include<ctype.h>
int a[10][10],visited[20],count=0,n,w;
void dfs(int v)
{
 count++;
 visited[v]=count;
  for(w=0;w<n;w++)
 if(visited[w]==0 && a[v][w]==1)
         dfs(w);
}
void main()
{
int i,j;
 printf("Enter the number of verticess");
 scanf("%d",&n);
 printf("\n Enter the matrix\n");
 for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
       }
   }
 printf("\n You Entered the matrix is\n");
 for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      {
        printf("\t%d\t",a[i][j]);
       }
      printf("\n");
   }
for(i=0;i<n;i++)
visited[i]=0;
dfs(0);
if(count==n)
printf("\n Graph is connected");
else
printf("\n Graph is disconnected");
}
