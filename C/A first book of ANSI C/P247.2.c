#include<stdio.h>
#include<math.h>
double dist(double ,double );/*计算原点到这个点的距离*/
double angel(double ,double );/*计算此点与x轴的角度*/ 
int main()
{
	double x,y;
	/*输入x，y的值*/ 
	printf("Please enter the coordinate of a dot:(x y)\n");
	scanf("%lf %lf",&x,&y);
	/*输出运算结果*/
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
