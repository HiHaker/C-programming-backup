//以十，十六，八进制表示数
#include<stdio.h>
int main(void)
{
	int x=100;
	
	printf("100的十进制为%d, 十六进制为%x, 八进制为%o \n",x,x,x);
	printf("100的十进制为%#d, 十六进制为%#x, 八进制为%#o ",x,x,x);
	
	return 0;	
}
