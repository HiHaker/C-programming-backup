/*
输入一个整数n，并求n的阶乘
胡健龙
2017.10.9
*/
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i,num0;//定义整数n，变量i//
	i = 1;
	num0 = 1;

	printf("\n请输入一个整数n\n");

	scanf("%d", &n);

	while (i <n)
	{

		num0 = num0*(i + 1);
		i = i + 1;
	}

	printf("n的阶乘等于%d", num0);

	system("pause");

	return 0;
}