#include<stdio.h>
#include<math.h>
#define PAI 3.1415926
int main()
{
	double x,y,t=0,angle;
	/*�Ƕ���ת��Ϊ������*/
	angle = (PAI/180.0)*22.8;
	/*��ͷ*/ 
	printf("The rate:500\nx------y------\n");
	/*��Ҫ����*/ 
	while(t<=10)
	{
		x=500*t*sin(angle);
		y=500*t*cos(angle);
		printf("%.4lf  %.4lf\n",x,y);
		t+=0.5;
	}
	
	return 0;
}
