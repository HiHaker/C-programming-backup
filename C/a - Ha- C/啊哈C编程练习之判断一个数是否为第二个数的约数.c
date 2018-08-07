#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number1, number2;//定义数字1,2//

	scanf("%d %d", &number1, &number2);//输入数字1,2//

	if (number1%number2==0)//如果数字1除以数字2的余数等于0，则符合条件//
		printf("YES\n");
	else//否则，不符合条件//
	{
		printf("NO\n");
	}

	system("pause");

	return 0;
}