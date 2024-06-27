#include <stdio.h>
int factorial(int n) 
{
    if (n==0||n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int main() 
{
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    int fact = factorial(number);
    printf("The factorial of %d is: %d\n", number, fact);
    return 0;
}

