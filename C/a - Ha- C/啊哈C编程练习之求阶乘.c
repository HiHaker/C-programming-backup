/*
����һ������n������n�Ľ׳�
������
2017.10.9
*/
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i,num0;//��������n������i//
	i = 1;
	num0 = 1;

	printf("\n������һ������n\n");

	scanf("%d", &n);

	while (i <n)
	{

		num0 = num0*(i + 1);
		i = i + 1;
	}

	printf("n�Ľ׳˵���%d", num0);

	system("pause");

	return 0;
}