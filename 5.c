#include <stdio.h>
// to print sum of cubes of first n natural numbers
int main()
{
    int num, sum = 0;
    printf("Enter Number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i * i * i;
    }
    printf("Sum of cubes of %d numbers is %d", num, sum);

    return 0;
}