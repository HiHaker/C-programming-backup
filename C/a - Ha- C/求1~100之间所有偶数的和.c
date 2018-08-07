/*
程序作用：求1~100之间所有偶数的和；
胡健龙；
2017.10.8；
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, sum;

	i = 1;
	sum = 0;

	while (i<=100)
	{	
		i = i + 1;
		if (i%2==0)
		sum = sum + i;
	}

	printf("1~100之间所有偶数的和=%d\n", sum);

	system("pause");

	return 0;
}