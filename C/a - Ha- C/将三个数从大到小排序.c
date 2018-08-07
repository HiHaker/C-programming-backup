#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number1, number2, number3,number0;

	printf("请输入三个数字\n");

	scanf("%d %d %d", &number1, &number2, &number3);

	if (number1 >= number2)	number1 = number1;//将number1和number2排序//
	else
	{
		number0 = number1;
		number1 = number2;
		number2 = number0;
		
	}

	if (number1 >= number3)	number1 = number1;//将number1和number3排序//
	else
	{
		number0 = number1;
		number1 = number3;
		number3 = number0;

	}

	if (number2 >= number3)	number2 = number2;//将number2和number3排序//
	else
	{
		number0 = number2;
		number2 = number3;
		number3 = number0;
	}

	printf("%d %d %d", number1, number2, number3);

	system("pause");

	return 0;
}