#include <stdio.h>
// to print sum of n even numbers
int main()
{
    int num, sum = 0;
    printf("Enter Number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + (2 * i);
    }
    printf("Sum of %d even numbers is %d", num, sum);

    return 0;
}