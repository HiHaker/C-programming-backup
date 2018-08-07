#include<stdio.h>
void selectTable(int ,int ,int );
int main()
{
	selectTable(6,5,2);
	
	return 0;
}

void selectTable(int num1,int num2,int num3)
{
	int i=1;
	while(i<=num2)
	{
		printf("%3d  %3d  %3d\n",num1,num1*num1,num1*num1*num1);
		num1+=num3;
		i++;
	}
}
