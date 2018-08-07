#include<stdio.h>
int main()
{
	int i=0,index;
	double num;
	/*检验是否正确输入*/ 
	do
	{
		index=0;
		/*输入错误时提示*/ 
		if(i>=1)
			printf("Please enter the correct decimalnumber!\n");
		printf("Please enter a decinumber:\n");
		scanf("%lf",&num);
		if (num<0||num>100)
			index=1;
		i++;
	}while(!(index==0&&i==5));
	/*输出*/
	printf("%lf\n",num);
	
	return 0;
}
