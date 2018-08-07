/*
程序作用：把能被7整除的和末尾带七的数求和。
出错警示：if 后面的圆括号不加分号，加了之后会导致结果改变！
健龙
2017.10.7；
*/
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int i = 1,a = 0;

	while (i <= 100)
	{
		if (i % 7 == 0 || i % 10 == 7)
		{
			a = a + i;
		}
		i = i+1;
	}
	
	printf("sum=%d",a);
	system("pause");

	return 0;
}