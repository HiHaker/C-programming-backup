#include<stdio.h>
#include<math.h>
#define PAI 3.1415926
int main()
{
	double x,y,t=0,angle;
	/*角度制转换为弧度制*/
	angle = (PAI/180.0)*22.8;
	/*表头*/ 
	printf("The rate:500\nx------y------\n");
	/*主要内容*/ 
	while(t<=10)
	{
		x=500*t*sin(angle);
		y=500*t*cos(angle);
		printf("%.4lf  %.4lf\n",x,y);
		t+=0.5;
	}
	
	return 0;
}
