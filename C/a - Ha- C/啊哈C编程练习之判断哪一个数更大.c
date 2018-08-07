#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number1, number2,max;

	scanf("%d %d", &number1, &number2);

	if (number1 > number2)
		max = number1;
	else	max = number2;

	printf("max=%d", max);

	system("pause");

	return 0;

}