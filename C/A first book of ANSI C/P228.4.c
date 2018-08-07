/*加仑转化为升*/
#include<stdio.h>
void gallonsToliters(double );
int main()
{
	gallonsToliters(56);
	return 0;
}

void gallonsToliters(double num1)
{
	double liter;;
	
	liter = 3.7854*num1;
	
	printf("The %lf gallons convert to liters is %lf",num1,liter);
}
