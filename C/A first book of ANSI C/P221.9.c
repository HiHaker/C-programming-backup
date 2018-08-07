#include<stdio.h>
#include<math.h>
void hypotenuse(int ,int );
int main()
{
	hypotenuse(7,8);
	
	return 0;
}

void hypotenuse(int a,int b)
{
	printf("两边的长度分别为%d %d,斜边的长度为%f",a,b,sqrt(a*a+b*b));
}
