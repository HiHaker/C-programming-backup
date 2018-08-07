/*
输入三个数字，输出其中的最大者和最小者
胡健龙
2017.10.16
*/
#include<stdio.h>
int main()
{
	float num1, num2, num3,num0;

	printf("Please input three numbers\n");
	scanf_s("%f %f %f", &num1, &num2, &num3);

	if (num1 <= num2)	
	{
		num0 = num1;
		num1 = num2;
		num2 = num0;
	}
	if (num1 <=num3)	
	{
		num0 = num1;
		num1 = num3;
		num3 = num0;
	}
	if (num2 <= num3)	
	{
		num0 = num2;
		num2 = num3;
		num3 = num0;
	}

	printf("The MAX number is %f,the MIN number is %f\n", num1, num3);
	printf("胡健龙20171120147\n");

	return 0;
}