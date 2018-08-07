#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int a = 1, s = 0;

	while (a <= 100)
	{
		s = s + a;

		a = a++;
	}
	printf("sum=%d", s);

	system("pause");

	return 0;
}