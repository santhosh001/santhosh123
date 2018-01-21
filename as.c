#include <stdio.h>
int main()
{
    int num,m =20,n=40;
    printf("Print even Numbers in a given range m to n:\n");
    for (num = m; num <= n; num++)
        {
               if (num % 2 == 0)
                  printf ("%d ", num);
         }
