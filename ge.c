
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],b[20][20],k=0,m,i,j,n,temp=0;
scanf("%d %d",&m,&n);
for(i=0;i<n*m;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m*n;i++)
{
for(j=i+1;j<n*m;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
b[i][j]=a[k];
k++;
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf(" %d",b[i][j]);
}
printf("\n");
}
