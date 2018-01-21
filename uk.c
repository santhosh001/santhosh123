#include<stdio.h>
void main()
{
int ch,x,p,i;
printf("Enter the child");
scanf("%d",&ch);
printf("Pairs");
scanf("%d",&p);
for(i=0;i<2*ch;i++)
{
x=2*ch-i;
if(p!=x)
{
printf("The pair is %d\n",p);
}
}
