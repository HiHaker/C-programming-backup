#include<stdio.h>
#define PAI 3.1415926
void countareas(double );
double returnradius(double );
int main()
{
	double perimeter = 35;
	
	countareas(returnradius(perimeter));
	
	return 0;
}

double returnradius(double c)
{
	double radius;
	/*����뾶*/
	radius = c/2*PAI;
	/*���ذ뾶*/ 
	return radius;
}

void countareas(double radius)
{
	double areas;
	
	areas = 2*PAI*radius*radius;
	
	printf("The areas of this circle is %lf\n",areas);
}
