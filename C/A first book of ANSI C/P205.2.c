#include<stdio.h>
int main()
{
	int i=0,index=0;
	double num,total=0;
	/*检验是否正确输入*/ 
	do
	{
		/*输入错误时提示*/ 
		if(index==1)/*输入错误时提示*/ 
			printf("Please enter the correct decimalnumber!\n");
		index=0;
		printf("Please enter a decinumber:\n");
		scanf("%lf",&num);
		if (num<0||num>100)/*输入错误时设定索引值为1*/ 
			index=1;
		else
			total+=num; /*输入有效数时相加*/
		i++;
	}while(num!=999);/*除非输入99否则执行循环*/
	/*输出*/
	printf("%lf\n",total/i);
	
	return 0;
}
