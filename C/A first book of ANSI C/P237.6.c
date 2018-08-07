#include<stdio.h>
void round(double );
int main()
{
	round(0);
	
	return 0;
}

void round(double num1)
{
	int mid;
	double result;
	
	mid = num1*0.08675*100+0.5;
	result = mid/100.0;
	
	printf("The result is %lf\n",result);
}
