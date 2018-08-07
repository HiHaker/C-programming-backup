//给定一个华氏温度，转化为摄氏温度//
//2017.10.9//
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{

	printf("%d", sizeof((long long int)1));

	float celsius;
	float fahrenheit;

	printf("\n请输入一个期待转化的华氏温度值\n");

	scanf("%f", &fahrenheit);

	
	celsius =( 5.0 / 9.0)*(fahrenheit - 32.0);

	printf("The Celsius equivalent of %.1f degrees fahrenheit\n", fahrenheit);
	printf("is %.1f degrees\n", celsius);
	printf("胡健龙20171120147\n");

	system("pause");

	return 0;
}