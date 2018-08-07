#include<stdio.h>
void countquations(double ,double ,double ,double );
int main()
{
	countquations(1,2,3,4);
	
	return 0;
}

void countquations(double a,double b,double c,double x)
{
	double results;
	
	results = a*x*x + b*b + c;
	
	printf("The results is %lf\n",results);
	
}
