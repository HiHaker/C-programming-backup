/*一个应用题。。。详见程序名*/
#include<stdio.h>
int main()
{
	int money=10,age=12,total=0;
	
	while(money<=1000)
	{
		total+=money;
		age++;
		money*=2;
	}
	
	printf("\nHer age is : %d, the total money of her is %d.\n",age,total);
	
	return 0;
}
