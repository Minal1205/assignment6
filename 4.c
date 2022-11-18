#include <stdio.h>
// to print sum of squares of first n natural numbers
int main()
{
    int num, sum = 0;
    printf("Enter Number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i * i;
    }
    printf("Sum of squares of %d numbers is %d", num, sum);

    return 0;
}