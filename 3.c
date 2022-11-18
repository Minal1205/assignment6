#include <stdio.h>
// to print sum of first n odd natural numbers
int main()
{
    int num, sum = 0;
    printf("Enter Number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + (2 * i - 1);
    }
    printf("Sum of %d odd numbers =%d", num, sum);

    return 0;
}