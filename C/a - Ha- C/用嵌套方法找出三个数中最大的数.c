#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number1, number2, number3;

	scanf("%d %d %d", &number1, &number2, &number3);

	if (number1 >= number2)
	{
		if (number1 >= number3)
			printf("MAX=%d", number1);
		else
			printf("MAX=%d", number3);
	}
	else
	{
		if (number2 >= number3)
			printf("MAX=%d", number2);
		else
			printf("MAX=%d", number3);
	}

	system("pausse");

	return 0;
}