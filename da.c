#include<stdio.h>
void main()
{
int a,b,i,m,n,t;
printf("enter the two intervals");
scanf("%d",%d",&a,&b);
for(i=a;i<=b;i++)
{
n=i;
m=0;
while(n>0)
{
s=n%10;
r=r+s*s*s;
n=n/10;
}
if(i==m)
{
printf("%d",armstrong number i);
}
}
}
