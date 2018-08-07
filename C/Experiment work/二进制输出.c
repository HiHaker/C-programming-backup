/*说明：这个程序让用户输入一个数（小数），转换为相应的二进制数，小数部分精度为四位有效数字*/
#include<stdio.h>
void binaryint(int);//创建一个名为binaryint的函数，其作用是把二进制整数转换为二进制小数// 
void binarydeci(double);//创建一个名为binarydeci的函数。其作用是把小数转换为二进制小数// 
double getdeci(double);//创建一个名为getdeci的函数，其作用是截取一个小数的小数部分// 
int main()
{
	double num0;
	printf("Please enter a number:\n");//提示输入一个数// 
	scanf("%lf",&num0);
	printf("The integer part is : \n");//输出整数部分// 
	binaryint((int)(num0));
	printf("\nThe fractional part is :\n");//输出小数部分// 
	binarydeci(num0);
	return 0;
}

//getci函数原型// 
double getdeci(double num1)
{
	double num3;
	
	num3=num1-(int)(num1);
	
	return num3;
}

//binaryint函数原型//
void binaryint(int x)
{
	#define MSIZE 81
	char message[MSIZE];//创建一个字符串数组//
	int i,k;
	
	//除二取余法//
	for(i=0;x!=0;i++)
	{
		message[i]=(char)(x%2);
		x/=2;
	}
	
	//输出结果//
	//使用puts函数输出的结果为框框的原因是puts函数将储存进数组中的元素01解读为字符，对照ASCII标准表得输出为不可打印字符// 
	for(k=i-1;k>=0;k--)
	{
		printf("%d",message[k]);
	}
}

//binarydeci函数原型// 
void binarydeci(double x)
{
	#define MSIZE 81
	int i,k;
	char message[MSIZE];
	x=getdeci(x);
	
	//乘二取整法//
	for(i=0;(x!=0)&&(i<4);i++)
	{
		x*=2.0;
		message[i]=(int)(x);
		x=getdeci(x);
	}
	printf(".");
	if(i!=0)
		for(k=0;k<i;k++)
		{
			printf("%d",message[k]);
		}
	else
		printf("0\n");
}

