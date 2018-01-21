#include <stdio.h>
int main()
{
int s, t, b= 0;
scanf("%d",&s);
printf("Input\n%d\n",s);
for(t=2; t<=s/2; t++)
{
if(s%t==0)
{
b=1;
break;
}
}
if (b==0)
{
printf("Output\nYes\n");
} 
else
{
printf("Output\nNo");
}    
return 0;
}
}
