/*显示输入的5个数中的最大数*/
#include<stdio.h>
int main()
{
	int i,num,index,maxnum;
	/*用户输入数据*/
	for(i=1;i<=5;i++)
	{
		printf("Please enter a number:\n");
		scanf("%d",&num);
		/*初始时设定最大的数为最开始输入的数*/ 
		if (i == 1)
			maxnum=num;
		/*接下来，若后面有更大的数就重新设定最大的数*/ 
		else if (num>maxnum)
		{
			maxnum=num;
			index=i;
		} 
	}
	/*输出*/ 
	printf("The biggest number of these numbers is %d, it's the %d .",maxnum,index);
	
	return 0;	
} 
