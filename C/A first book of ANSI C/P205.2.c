#include<stdio.h>
int main()
{
	int i=0,index=0;
	double num,total=0;
	/*�����Ƿ���ȷ����*/ 
	do
	{
		/*�������ʱ��ʾ*/ 
		if(index==1)/*�������ʱ��ʾ*/ 
			printf("Please enter the correct decimalnumber!\n");
		index=0;
		printf("Please enter a decinumber:\n");
		scanf("%lf",&num);
		if (num<0||num>100)/*�������ʱ�趨����ֵΪ1*/ 
			index=1;
		else
			total+=num; /*������Ч��ʱ���*/
		i++;
	}while(num!=999);/*��������99����ִ��ѭ��*/
	/*���*/
	printf("%lf\n",total/i);
	
	return 0;
}
