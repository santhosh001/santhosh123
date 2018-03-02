#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	printf("enter the value: %d %d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("the swp value is%d %d\n",a,c);
	return 0;
	
	
}
