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
	printf("���ߵĳ��ȷֱ�Ϊ%d %d,б�ߵĳ���Ϊ%f",a,b,sqrt(a*a+b*b));
}
