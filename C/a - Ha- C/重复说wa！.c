#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{	
	system("color 0a");
	int n = 1;
	while (n<=100)
	{
		printf("%d\n",n);
		n = n + 1;
	}
	system("pause");

	return 0;
}