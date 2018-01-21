
#include <stdio.h>

int main(void) {
int a[100],n,i,b,max;
printf("\n enter the no. of values");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(b=0;b<n;b++)
{
	if(a[b]>a[i])
		max=a[j];
}
}
printf("\n the max value is %d ", max);
	return 0;
}
}
