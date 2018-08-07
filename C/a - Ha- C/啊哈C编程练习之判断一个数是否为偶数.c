#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number1;

	scanf("%d",&number1);

	if (number1 % 2 == 0)

		printf("YES\n");

	if (number1 % 2 != 0)

		printf("NO\n");

	system("pause");

	return 0;
}