#include <stdio.h>
// to check whether a given number is prime number or not
int main()
{
    int num, f = 0; // f is a flag (indicator) variable telling it is prime or not
    printf("Enter Number\n");
    scanf("%d", &num);
    for (int i = 2; i < num/2; i++)//you can use n/2 also(property of numbers)
    {
        if (num % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 0) //flag variable works outside the loop
    {
        printf("%d is prime\n", num);
    }
    else
    {
        printf("%d is not prime", num);
    }

    return 0;
}