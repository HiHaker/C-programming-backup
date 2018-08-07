#include<stdio.h>
int main()
{
	double num;
	/*检验是否正确输入*/ 
	do
	{
		printf("Please enter a number:\n");
		scanf("%lf",&num);
	}while(num!=999);
	/*输出*/
	printf("%lf\n",num);
	
	return 0;
}
