#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int year1;

	scanf("%d", &year1);

	if (year1%4==0&&year1%100!=0||year1%400==0)	printf("YES\n");
	else printf("NO\n");

	system("pause");

	return 0;
}