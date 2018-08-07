#include<stdio.h>
int main()
{
	int num1,mid1,mid2,num3=0;
	/*提示信息*/ 
	printf("Please enter a number:\n");
	scanf("%d",&num1);
	mid2=num1;
	/*主算法*/ 
	do
	{
		mid1=mid2%10;/*对10取余，剥离数字*/ 
		num3=num3*10+mid1;/*乘10相加*/
		mid2=mid2/10; 
	}while(mid2!=0);
	/*输出*/
	printf("\n%d to %d\n",num1,num3);
	
	return 0;
}
