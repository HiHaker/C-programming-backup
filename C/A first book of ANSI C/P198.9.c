#include<stdio.h>
#include<math.h>
int main()
{
	double x=5,y;
	/*��ͷ*/
	printf("x------y------\n");
	/*��Ҫ����*/ 
	while(x<=10)
	{
		y=3*pow(x,5)-2*pow(x,3)+x;
		printf("%.4lf  %.4lf\n",x,y);
		x+=0.2;
	}
	
	return 0;
}
