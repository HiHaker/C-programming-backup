#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number1,intermediate;

	scanf("%d", &number1);

	intermediate = number1 / 1;

	if (intermediate >= 10)
		printf("NO\n");
	else
	{
		printf("YES\n");
	}

	system("pause");

	return 0;


}