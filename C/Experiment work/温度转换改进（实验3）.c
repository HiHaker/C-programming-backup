//����һ�������¶ȣ�ת��Ϊ�����¶�//
//2017.10.9//
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float celsius;
	float fahrenheit;

	printf("\n������һ���ڴ�ת���Ļ����¶�ֵ\n");

	scanf("%f", &fahrenheit);

	celsius =( 5.0f / 9.0f)*(fahrenheit - 32.0f);

	printf("The Celsius equivalent of %.1f degrees fahrenheit\n", fahrenheit);
	printf("is %.1f degrees\n", celsius);
	printf("������20171120147\n");

	system("pause");

	return 0;
}