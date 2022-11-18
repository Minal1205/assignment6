#include<stdio.h>
//to find factorial of a given number
int main(){
    int num,factorial=1;
    printf("Enter number\n");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        factorial=factorial*i;
    }
    printf("Factorial of %d is %d",num,factorial);
    

    
    return 0;
}