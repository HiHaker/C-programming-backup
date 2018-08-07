#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number1, number2, number3,number0;

	scanf("%d %d %d", &number1, &number2, &number3);

	if (number1 >= number2)	number0 = number1;
	else number0 = number2;

	if (number0 >= number3)	number0 = number0;
	else number0 = number3;

	printf("MAX=%d", number0);

	system("pause");

	return 0;
}