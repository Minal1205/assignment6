#include <stdio.h>
// to calculate LCM of two numbers
int main()
{
    int a, b;
    printf("Enter Two Numbers\n");
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a * b; i++)
    {

        if (i % a == 0 && i % b == 0)
        {
            printf("LCM of %d and %d is %d\n", a, b, i);
            break;
        }
    }
    return 0;
}