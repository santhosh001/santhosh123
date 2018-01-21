#include<stdio.h>
int main(void)
{
	int a,b,i,c,count=0;
	printf("enter two n.o");
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++)
	{
		for(c=1;c<=i;c++)
		{
			if(i%c==0)
			{
			count++;
		}
	}
	if(count==2)
	{
printf("%d",i);
}

return 0;
}
}
