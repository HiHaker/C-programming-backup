//����һ�������¶ȣ�ת��Ϊ�����¶�//
//2017.10.9//
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{

	printf("%d", sizeof((long long int)1));

	float celsius;
	float fahrenheit;

	printf("\n������һ���ڴ�ת���Ļ����¶�ֵ\n");

	scanf("%f", &fahrenheit);

	
	celsius =( 5.0 / 9.0)*(fahrenheit - 32.0);

	printf("The Celsius equivalent of %.1f degrees fahrenheit\n", fahrenheit);
	printf("is %.1f degrees\n", celsius);
	printf("������20171120147\n");

	system("pause");

	return 0;
}