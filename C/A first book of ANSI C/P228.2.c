#include<stdio.h>
#include<math.h>
double distance(double ,double ,double ,double );
int main()
{
	printf("The distance of (4,2) and (2,4) is %lf",distance(4,2,2,4));
	
	return 0;
}
/*计算两点距离的函数，返回一个double值*/
double distance(double x1,double x2,double y1,double y2)
{
	double distance;

	distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	
	return distance;
}
