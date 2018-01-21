#include<stdio.h>
void main()
{
char str[100];
int i,count=0;
printf("Enter the string:");
scanf("%c",&str[i]);
for(i=0;str[i]!='/0';i++)
{
if(str[i]==' ')
{
count++;
}
}
printf("%d",count);
}
}
