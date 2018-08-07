/*将英里转换成千米的表*/
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
	/*打印表格*/
	printf("Acres------Kilometers\n");/*表头*/ 
	while(i<=times)
	{
		printf("%.2lf      %lf\n",begans,begans*1.6093);
		begans+=adds;
		i++;
	}
}
