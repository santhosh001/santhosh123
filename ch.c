
#include<stdio.h>
void printName(char*name,intcount)
{
printf(%03d:is\n",count+1,name);
count+=1;
if(count<10)
printName(name,count);
}
int main()
{
charname[50];
printf("enter your name:");
scanf("%s",name);
printfName(name,0)
}
