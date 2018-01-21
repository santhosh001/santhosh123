#include<stdio.h>
void main()
{
int n,m,result=0,rem;
printf("enter the number");
scanf("%d",&n);
m=n;
while(n!=0)
{
rem=n%10;
result=result+rem*rem*rem;
n=n/10;
}
if(m==result)
{
printf("%d",yes);
}
else
{
printf("%d",no);
}
}
}
