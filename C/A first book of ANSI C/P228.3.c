#include<stdio.h>
void tempConvert(char ,double );
int main()
{
	tempConvert('f',56.3);
	
	return 0;
}

void tempConvert(char c,double num1)
{
	double celsius,fahrenheit;
	/*����Ϊf���ѻ����¶�ת��Ϊ�����¶�*/
	if (c=='f')
	{
		celsius = (5.0/9.0)*(num1-32);
		printf("The result is %lf\n",celsius);
	}
	else/*�������¶�ת��Ϊ�����¶�*/ 
	{
		fahrenheit = num1*(9.0/5.0)+32;
		printf("The result is %lf\n",fahrenheit);
	}
}
