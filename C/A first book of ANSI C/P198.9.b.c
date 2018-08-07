#include<stdio.h>
#include<math.h>
int main()
{
	double x=1,y;
	/*表头*/
	printf("x------y------\n");
	/*主要内容*/ 
	while(x<=3)
	{
		y=1+x+(x*x)/2.0+(x*x*x)/6.0+pow(x,4)/24.0;
		printf("%.4lf  %.4lf\n",x,y);
		x+=0.1;
	}
	
	return 0;
}
