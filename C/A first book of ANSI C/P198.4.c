/*����1~31֮�������ֵ*/
#include<stdio.h>
int main()
{
	int date;
	/*ѭ����֤����*/
	do
	{
		printf("\nPlease enter a date:\n");
		scanf("%d",&date);
	}while(date<1||date>31);
	/*�������*/ 
	printf("The date is %d",date);
	
	return 0;
}
