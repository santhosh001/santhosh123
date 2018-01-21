
#include<stdio.h>

void main() 
{
    int a[10],n,sum=0,median,i;
    printf("Enter the total element");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the array values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

for(i=0;i<n;i++)
{
    sum=sum+a[i];
    }
    median=sum/n;
    printf("The median  is:");
    printf("%d",median);
}
}
