#include<stdio.h>
#include<stdlib.h>
int n,d[12],p[12],cost[6][6];
void dijikstra(int src){
   int i,j,u,v,min,s[10];
   for(i=0;i<n;i++)
   {
     d[i]=cost[src][i];
     s[i]=0;
     p[i]=src;
   
  }
  s[src]=1;
  for(i=1;i<n;i++)
  {
  min=99;
  u=1;
  for(j=0;j<n;j++)
  {
  if(s[j]==0)
  {
   if(d[j]<min)
   {
    min=d[j];
    u=j;
   }
  }
  }
  if(u==-1)
  return;
  s[u]=1;
   for(v=0;v<n;v++)
   {
    if(s[v]==0)
    { 
     if(d[u]+cost[u][v]<d[v])
     {
      d[v]=d[u]+cost[u][v];
      p[v]=u;
     }
    }
   }
  }
 }
 void path(int src,int dest)
 {
 int i;
 i=dest;
 while(i!=src)
 {
  printf("%d =%d",i,d[dest]);
 }
 }
 void main()
 {
 int i,j,src;
 printf("enter the number of vertices");
 scanf("%d",&n);
 printf("enterthe cost adgecency matrix");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
 scanf("%d",&cost[i][j]);
 }
 }
 dijikstra(src);
 printf("the shortest path of matrix is");
 for(i=0;i<n;i++)
 {
  if(d[i]!=99)
  {
   path(src,i);
  }
   else
    printf("not reachable from %d to %d",src,i);
    printf("\n");
   }
 }

