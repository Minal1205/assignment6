#include <stdio.h>
// to calculate sum of first n natural numbers
int main()
{
  int num, sum = 0;
  printf("Enter Number\n");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++)
  {
    sum = sum + i;
  }
  printf("sum of first %d natural numbers is %d", num, sum);

  return 0;
}