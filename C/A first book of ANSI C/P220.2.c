/*��дһ����ΪfAbs�ĺ��������ֵ*/
#include<stdio.h>
#include<math.h>
void findAbs(double );
int main()
{
	findAbs(-56.3656);
	
	return 0;
}

void findAbs(double x)
{
	printf("%lf\n ",fabs(x));
}
