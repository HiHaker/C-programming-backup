#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	double dnum;
	
	num = atoi("1234");/*ת���ַ���Ϊ����*/
	
	printf("The string \"1234\ as aninteger number is :%d \n",num);
	printf("This number divided by 3 is :%d \n\n",num/3);
	
	dnum = atof("1234.96");/*ת���ַ���Ϊ˫������*/
	
	printf("The string \*1234.96*\ as a double is :%lf\n",dnum/3);
	
	return 0;
}

