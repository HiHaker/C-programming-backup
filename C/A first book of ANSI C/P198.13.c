/*温度转换，数据由用户输入*/
#include<stdio.h>
int main(void)
{
	int i,times;
	double celsius,fahrenheit,began;
	/*提示输入*/
	printf("This program help you to transform ,what's the fahrenheit?\n");
	scanf("%lf",&began);
	fahrenheit=began;/*赋值初始温度*/ 
	printf("How many times would you like?\n");
	scanf("%d",&times);
	printf("Farhenheit---Celsius\n");/*表头*/
	/*内容*/ 
	for(i=1;i<=times;i++)
	{
		celsius=(5.0/9.0)*(fahrenheit-32.0);
		printf("%lf  %lf\n",fahrenheit,celsius);
		fahrenheit+=5;
	}
	
	return 0;
}
