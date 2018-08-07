#include<stdio.h>
int main(void)
{
	int i,j,k,index1=2,index2=1;//i代表空格，j代表组成元素, k代表行数 
	char c;
	scanf("%c",&c);
	for(k=1;k<=3;k++)
	{
		for(i=1;i<=index1;i++)
			printf(" ");index1-=1;
		for(j=1;j<=index2;j++)
			printf("%c",c);index2+=2;
		printf("\n");
	}
	index1=1;index2=3;
	for(;k<=5;k++)
	{
		for(i=1;i<=index1;i++)
			printf(" ");index1+=1;
		for(j=1;j<=index2;j++)
			printf("%c",c);index2-=2;
			printf("\n");
	}
	return 0;
}
