#include<stdio.h>
int main()
{
    void swap(double *, double *);
    double a,b;
    printf("This program is help you to swap the two numbers\n");
    printf("so,please enter two numbers\n");
    
    scanf("%lf",&a);
    scanf("%lf",&b);
    
    printf("The numbers you just enter is %f,%f\n",a,b);
    swap (&a,&b);
    printf("The numbers after swap is %f,%f\n",a,b);
    
    return 0;
}

void swap(double *num1,double *num2)
{
    double t;
    
    t=*num1;
    *num1=*num2;
    *num2=t;
}

