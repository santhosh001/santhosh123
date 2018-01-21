#include<stdio.h>
void main()
{
int x[10],i,j,swap,size;
printf("enter the size of an array\n");
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
swap=x[i];
x[i]=x[j];
x[j]=swap;
}
}
printf("the sorted array is");
for(i=0;i<size;i++)
{
printf("%d",x[i]);
}
