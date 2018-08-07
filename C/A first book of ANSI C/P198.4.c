/*请求1~31之间的日期值*/
#include<stdio.h>
int main()
{
	int date;
	/*循环验证输入*/
	do
	{
		printf("\nPlease enter a date:\n");
		scanf("%d",&date);
	}while(date<1||date>31);
	/*输出输入*/ 
	printf("The date is %d",date);
	
	return 0;
}
