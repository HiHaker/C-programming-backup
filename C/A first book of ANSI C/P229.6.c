#include<stdio.h>
int Tofactorial(int );
void combine(int ,int );
int main()
{
	combine(5,10);
	
	return 0;
}
/*计算阶乘的函数*/
int Tofactorial(int x)
{
	int i,j=x;
	
	while(j>1)
	{
		x*=j-1;
		j-=1;
	}
	
	return x;
}
/*计算组合的函数*/ 
void combine(int x,int y)
{
	int numbers;
	
	numbers = Tofactorial(y)/(Tofactorial(x)*Tofactorial(y-x));
	
	printf("The numbers are %d\n",numbers);
}
