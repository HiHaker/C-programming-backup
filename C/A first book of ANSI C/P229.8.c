#include<stdio.h>
#include<math.h>
double countPI();
int main()
{
	printf("The PI's value is %lf",countPI());
	
	return 0;
}

double countPI()
{
	return asin(1.0)*2;
}
