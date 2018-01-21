#include <stdio.h>
 
int main()
{
  int c, v, fact = 1;
 
  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &v);
 
  for (c = 1; c <= v; c++)
    fact = fact * c;
 
  printf("Factorial of %d = %d\n", v, fact);
 
  return 0;
}
