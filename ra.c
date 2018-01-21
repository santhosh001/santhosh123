#include <stdio.h>
int main()
{
 int low, high, i, flag;
 printf("Enter two odd numbers(intervals): ");
 scanf("%d %d", &low, &high);
 while (low >high)
 {
 flag = 0;
 for(i = 2; i <= high/2; ++i)
 {
 if(high% i == 0)
 {
 flag = 1;
 break;
 }
 }
 if (flag == 0)
 printf("%d ", high);
 ++high;
 }
 return 0;
}
