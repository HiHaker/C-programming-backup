#include<stdio.h>
#include<math.h>
double dist(double ,double );/*����ԭ�㵽�����ľ���*/
double angel(double ,double );/*����˵���x��ĽǶ�*/ 
int main()
{
	double x,y;
	/*����x��y��ֵ*/ 
	printf("Please enter the coordinate of a dot:(x y)\n");
	scanf("%lf %lf",&x,&y);
	/*���������*/
	printf("The distance of this dot is %lf\n",dist(x,y));
	printf("The angel between this dot and x coordinate axis is %lf\n",angel(x,y));
		
	return 0;
}

double dist(double x, double y)
{
	return sqrt(x*x+y*y);
}

double angel(double x, double y)
{
	return atan(y/x);
}
