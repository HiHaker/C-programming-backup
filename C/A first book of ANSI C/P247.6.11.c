#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	double dnum;
	
	num = atoi("1234");/*转换字符串为整数*/
	
	printf("The string \"1234\ as aninteger number is :%d \n",num);
	printf("This number divided by 3 is :%d \n\n",num/3);
	
	dnum = atof("1234.96");/*转换字符串为双精度数*/
	
	printf("The string \*1234.96*\ as a double is :%lf\n",dnum/3);
	
	return 0;
}

