#include<stdio.h>
void main()
{
int hr1,hr2,min1,min2,hr,min;
printf("enter the hour and minute");
scanf("%d%d%d%d",&hr1,&min1,&hr2,&min2);
hr=hr1-hr2;
min=min1-min2;
printf("hour\tminute\n");
printf("%d\t%d",hr,min);
}
}
