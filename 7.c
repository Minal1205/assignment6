#include <stdio.h>
// program to count the digit in a given number
int main()
{
    int num, count = 0;
    printf("Enter Number\n");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }

    printf("Number of digits in  is %d", count);

    return 0;
}