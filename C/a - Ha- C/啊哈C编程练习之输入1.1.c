#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	a = b - a;
	b = b - a;
	a = b + a;

	printf("%d %d", a, b);

	system("pause");

	return 0;

}