#include <stdio.h>
int main(void)
{
int m,n,tmp;
scanf("%d%d",&m,&n);
tmp=m;	
m=n;
n=tmp;
printf("%d\t%d",m,n);
return 0;
}
}
