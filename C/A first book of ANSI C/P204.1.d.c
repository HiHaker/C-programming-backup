#include<stdio.h>
int main()
{
	int i=0,index;
	double num;
	/*�����Ƿ���ȷ����*/ 
	do
	{
		index=0;
		/*�������ʱ��ʾ*/ 
		if(i>=1)
			printf("Please enter the correct decimalnumber!\n");
		printf("Please enter a decinumber:\n");
		scanf("%lf",&num);
		if (num<0||num>100)
			index=1;
		i++;
	}while(!(index==0&&i==5));
	/*���*/
	printf("%lf\n",num);
	
	return 0;
}
