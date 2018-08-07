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
	/*传入为f，把华氏温度转换为摄氏温度*/
	if (c=='f')
	{
		celsius = (5.0/9.0)*(num1-32);
		printf("The result is %lf\n",celsius);
	}
	else/*把摄氏温度转换为华氏温度*/ 
	{
		fahrenheit = num1*(9.0/5.0)+32;
		printf("The result is %lf\n",fahrenheit);
	}
}
