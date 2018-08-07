/*µü´ú*/
#include<stdio.h>
int main()
{
    int factorial(int);
    int num0;
    
    printf("Please enter a number\n");
    scanf_s("%d",&num0);
    printf("This number's factorial is %d\n",factorial(num0));

    return 0;
}

int factorial(int num1)
{
    int i,k;
    for (i=1,k=1;i<=num1;i++)
        k=k*i;

    return k;
}
