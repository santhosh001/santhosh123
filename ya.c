#include<stdio.h>
int main()
{
	int number,limit,i;
	printf("Enter the limit:");
	scanf("%d",&limit);
	printf("Enter the number:");
	scanf("%d",&number);
	for(i=1;i<=limit;i++)
	{
		if(i%number==0)
		printf("%d\n",i);
	}
	return 0;
}
}
