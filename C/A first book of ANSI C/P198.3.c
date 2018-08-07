/*输入有效数值验证*/
#include<stdio.h>
int main()
{
	int month;
	/*提示输入信息*/
	printf("\nEnter a month between 1 and 12: ");
	scanf("%d",&month);
	/*验证输入*/
	while(month<1||month>12)
	{
		printf("Error---The month you entered is not valid.\nEnter a month between 1 and 12:\n");
		fflush(stdin);
		scanf("%d",&month);
	}
	/*输出*/
	printf("The month accepted is %d\n",month);
	
	return ;
}
