/*�¶�ת�����������û�����*/
#include<stdio.h>
int main(void)
{
	int i,times;
	double celsius,fahrenheit,began;
	/*��ʾ����*/
	printf("This program help you to transform ,what's the fahrenheit?\n");
	scanf("%lf",&began);
	fahrenheit=began;/*��ֵ��ʼ�¶�*/ 
	printf("How many times would you like?\n");
	scanf("%d",&times);
	printf("Farhenheit---Celsius\n");/*��ͷ*/
	/*����*/ 
	for(i=1;i<=times;i++)
	{
		celsius=(5.0/9.0)*(fahrenheit-32.0);
		printf("%lf  %lf\n",fahrenheit,celsius);
		fahrenheit+=5;
	}
	
	return 0;
}
