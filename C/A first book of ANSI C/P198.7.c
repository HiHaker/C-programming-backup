/*选择并显示能被3整除的前20个整数*/
#include<stdio.h>
int main()
{
	int i,num;
	
	printf("The numbers those can be divisible are:");
	
	for(i=1;i<=20;i++)
	{
		if(i%3==0)
			printf("%d ",i);
	}
	
	return 0;
}
