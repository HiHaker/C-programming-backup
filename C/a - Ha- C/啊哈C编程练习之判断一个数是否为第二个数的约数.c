#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number1, number2;//��������1,2//

	scanf("%d %d", &number1, &number2);//��������1,2//

	if (number1%number2==0)//�������1��������2����������0�����������//
		printf("YES\n");
	else//���򣬲���������//
	{
		printf("NO\n");
	}

	system("pause");

	return 0;
}