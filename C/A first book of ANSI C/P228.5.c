/*��Ӣ��ת����ǧ�׵ı�*/
#include<stdio.h>
void conversions(double ,int ,int );
int main()
{
	conversions(25,5,2);
	
	return 0;
}

void conversions(double begans,int times,int adds)
{
	int i=1;
	/*��ӡ���*/
	printf("Acres------Kilometers\n");/*��ͷ*/ 
	while(i<=times)
	{
		printf("%.2lf      %lf\n",begans,begans*1.6093);
		begans+=adds;
		i++;
	}
}
