/*
实验4.5
根据用户的要求输出相应的菱形
胡健龙2017.10.18
*/
#include<stdio.h>
int main()
{
	int i, j, k, n, num0;//定义计数变量i，n，符号数目j，空格数目k，输入数据num0//

	printf("Please input a number of the rhombus's longest side\n");//输出提示信息：请输入一个菱形最长边长的数字//
	printf("Warning : please input a odd number\n");

	scanf_s("%d", &num0);

	while (num0 <= 0 || num0 % 2 == 0)
	{
		printf("Error! please input again!\n");
		scanf_s("%d", &num0);
	}

	i = 1, j = 1, n = 1, k = (num0 - 1) / 2;//初始化变量，根据观察可知，图形第一行的左边的空格数目等于最长边（num0-1）/2//

	while (n <= k)//第一部分：图形的上半部分//
	{
		printf(" ");//打印空格//
		n = n + 1;
		if ((n - 1) == k&&j <= num0)
		{
			while (i <= j)
			{
				printf("*");
				i = i + 1;
			}
			printf("\n");//换行//
			n = 1, i = 1;//刷新变量n,i//
			j = j + 2;//后一行比前一行小图形数多二//
			k = k - 1;//后一行空格数少一//
		}
		else continue;
	}

	while (i <= j)//第二部分：打印中间一行//
	{
		printf("*");
		i = i + 1;
	}
	printf("\n");

	i = 1;//刷新变量//

	k = k + 1, j = j - 2;

	while (n <= k&&k <= (num0 - 1) / 2)//第三部分：打印图形后半部分//
	{
		printf(" ");
		n = n + 1;
		if ((n - 1) == k&&j >= 0)
		{
			while (i <= j)
			{
				printf("*");
				i = i + 1;
			}
			printf("\n");
			n = 1, i = 1;
			j = j - 2;
			k = k + 1;
		}
		else continue;
	}

	return 0;
}