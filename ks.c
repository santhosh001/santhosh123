#include <stdio.h>

int main(void) 
{
	char s[50];
	int k,i;
	printf("enter the string:");
	scanf("%s",s);
	printf("enter the number:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("\n%s",s);
	}
	return 0;
}
