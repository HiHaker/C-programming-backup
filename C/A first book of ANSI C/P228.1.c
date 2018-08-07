/*计算美元总数*/ 
#include<stdio.h>
void totamt(int ,int ,int ,int );
int main()
{
	/*传入参数*/
	totamt(1,1,1,1);
	
	return 0;
}

void totamt(int quarters,int dimes,int nickels,int pennies)
{
	double money;
	
	money = quarters*0.25+dimes*0.1+nickels*0.05+pennies*0.01;
	
	printf("It's %lf dollars\n",money);
}
