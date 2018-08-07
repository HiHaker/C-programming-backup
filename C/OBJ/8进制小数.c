//八进制小数 
#include<stdio.h>
#include<math.h>//包含数学库函数 
#define MSIZE 20//符号常量
int getdcnum(int []);//接收小数函数 
int main(void)
{
	int i,k=-1,length;
	int num1[MSIZE];
	double nums2=0;
	
	printf("Please enter a octal number:\n");
	length=getdcnum(num1);//传递数组传递的是数组名！！！ 
	for(i=0;i<length;i++,k--)//计算 
		nums2+=num1[i]*pow(8,k);
	printf("0.");//输出 
	for(i=0;i<length;i++)
		printf("%d",num1[i]);
	printf(" [8] = %lf [10]",nums2);
	return 0;
}
int getdcnum(int nums[])//接收小数函数 
{
	int i=0;
	char mid='a';
	while(mid!='\n')
	{
		mid=getchar();
		if(i>=2&&mid!='\n')
			nums[i-2]=mid-'0';
		i++;
	}
	return i-3;
}
