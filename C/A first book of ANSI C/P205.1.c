#include<stdio.h>
int main()
{
	double num;
	/*�����Ƿ���ȷ����*/ 
	do
	{
		printf("Please enter a number:\n");
		scanf("%lf",&num);
	}while(num!=999);
	/*���*/
	printf("%lf\n",num);
	
	return 0;
}
