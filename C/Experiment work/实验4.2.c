/*
企业发放奖金问题:单位万元；
胡健龙
2017.10.16
*/
#include<stdio.h>
int main()
{
	double income, bonus;
	
	printf("Please type the incomes\n");
	scanf_s("%lf", &income);

	if (income <= 10)
	{
		bonus = income*0.1;
	}
	else if (income <= 20)
	{
		bonus = (10 * 0.1) + (income - 10)*0.075;
	}
	else if (income <= 40)
	{
		bonus = (income - 20)*0.05+10*0.075+10*0.1;
	}
	else if (income <= 60)
	{
		bonus = (income - 40)*0.03+20*0.05+10*0.075+10*0.1;
	}
	else if (income <= 100)
	{
		bonus = (income - 60)*0.015+20*0.03+20*0.05+10*0.075+10*0.1;
	}
	else
	{
		bonus = income*0.01+40*0.015+20*0.03+20*0.05+10*0.075+10*0.1;
	}

	printf("The bonus = %lf\n", bonus);
	printf("胡健龙20171120147\n");

	return 0;
}