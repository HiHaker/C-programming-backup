/*������Ч��ֵ��֤*/
#include<stdio.h>
int main()
{
	int month;
	/*��ʾ������Ϣ*/
	printf("\nEnter a month between 1 and 12: ");
	scanf("%d",&month);
	/*��֤����*/
	while(month<1||month>12)
	{
		printf("Error---The month you entered is not valid.\nEnter a month between 1 and 12:\n");
		fflush(stdin);
		scanf("%d",&month);
	}
	/*���*/
	printf("The month accepted is %d\n",month);
	
	return ;
}
