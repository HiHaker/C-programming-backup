/*˵��������������û�����һ������С������ת��Ϊ��Ӧ�Ķ���������С�����־���Ϊ��λ��Ч����*/
#include<stdio.h>
void binaryint(int);//����һ����Ϊbinaryint�ĺ������������ǰѶ���������ת��Ϊ������С��// 
void binarydeci(double);//����һ����Ϊbinarydeci�ĺ������������ǰ�С��ת��Ϊ������С��// 
double getdeci(double);//����һ����Ϊgetdeci�ĺ������������ǽ�ȡһ��С����С������// 
int main()
{
	double num0;
	printf("Please enter a number:\n");//��ʾ����һ����// 
	scanf("%lf",&num0);
	printf("The integer part is : \n");//�����������// 
	binaryint((int)(num0));
	printf("\nThe fractional part is :\n");//���С������// 
	binarydeci(num0);
	return 0;
}

//getci����ԭ��// 
double getdeci(double num1)
{
	double num3;
	
	num3=num1-(int)(num1);
	
	return num3;
}

//binaryint����ԭ��//
void binaryint(int x)
{
	#define MSIZE 81
	char message[MSIZE];//����һ���ַ�������//
	int i,k;
	
	//����ȡ�෨//
	for(i=0;x!=0;i++)
	{
		message[i]=(char)(x%2);
		x/=2;
	}
	
	//������//
	//ʹ��puts��������Ľ��Ϊ����ԭ����puts����������������е�Ԫ��01���Ϊ�ַ�������ASCII��׼������Ϊ���ɴ�ӡ�ַ�// 
	for(k=i-1;k>=0;k--)
	{
		printf("%d",message[k]);
	}
}

//binarydeci����ԭ��// 
void binarydeci(double x)
{
	#define MSIZE 81
	int i,k;
	char message[MSIZE];
	x=getdeci(x);
	
	//�˶�ȡ����//
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

