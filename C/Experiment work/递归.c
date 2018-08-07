/*ตÝน้*/
#include<stdio.h>
int main()
{
    int factorial(int);
    
    int num0;

    printf("Please enter a number\n");
    scanf_s("%d",&num0);
    printf("The factorial of the %d is %d\n",num0,factorial(num0));
    
    return 0;
}

int factorial(int num1)
{
    if (num1-1>0)
    {
        num1=num1*factorial(num1-1);
    }
    else;
    
    return num1;
}
