#include<stdio.h>
#include<math.h>
int main()
{
	double t=4,y;
	/*表头*/
	printf("x------y------\n");
	/*主要内容*/ 
	while(t<=10)
	{
		y=2*exp(8*t);
		printf("%.4lf  %.4lf\n",t,y);
		t+=0.2;
	}
	
	return 0;
}
