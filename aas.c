#include<stdio.h>
int main()
{
   int n,a[100],i,t=0;
   printf("enter the count\nenter the elements");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]>=t)
       {
           t=a[i];
       }
   }
   printf("\n%d",t);
}
}
