#include<stdio.h>
int main()
{
	int num1,mid1,mid2,num3=0;
	/*��ʾ��Ϣ*/ 
	printf("Please enter a number:\n");
	scanf("%d",&num1);
	mid2=num1;
	/*���㷨*/ 
	do
	{
		mid1=mid2%10;/*��10ȡ�࣬��������*/ 
		num3=num3*10+mid1;/*��10���*/
		mid2=mid2/10; 
	}while(mid2!=0);
	/*���*/
	printf("\n%d to %d\n",num1,num3);
	
	return 0;
}
