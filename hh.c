#include<stdio.h>
void main()
{
int a[10],n,k,i,sum=0;
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
{
  printf("%d\t",a[i]);
}
for(i=1;i<=k;i++)
{
  sum=sum+a[i];
}
 
