#include<stdio.h>
//�趨���鳤��// 
#define MSIZE 81
#define MSIZE 81
void getline(int *, int[],char [MSIZE][MSIZE]);//����һ����Ϊgetline�ĺ������������ǽ��ն����ַ������ҵõ�������ÿ�е��ַ���// 
void select(int ,int []);//����һ����Ϊselect�ĺ����������ǰ�һ�����鰴��������// 
void statics(int ,int [],int [],int []);//����һ����Ϊstatic��ͳ�ƺ����������ǰ�һ�������ڵ�����ͳ�Ʋ������//
int main()
{
	char message[MSIZE][MSIZE];//����һ��message��ά�������ڴ洢�ַ���// 
	int nums[MSIZE],nums0[MSIZE],sstatic[MSIZE];//����һ��nums�������ڴ洢ÿ���ַ���// 
	
	int rows=0,i;//����//
	
	printf("Please enter a strings:\n");
	getline(&rows,nums,message);
	select(rows,nums);
	statics(rows,nums,nums0,sstatic);
	return 0; 
}

//getline����ԭ��// 
void getline(int *x,int list[],char mes[MSIZE][MSIZE])
{
	int i,j,k;
	char c;
	
	/*��Ҫ�㷨
	���趨һ�����������ַ������������ѡ�����û�һ��ʼ���»س������������������λس���ʱ��ֹ�ַ����գ�
	�趨һ���ַ�����������ʱ�洢�ַ�ֵ
	�жϴ��ַ�ֵ�Ƿ����\n,������ʱִ��ѭ���� 
	�����յ�һ���ַ�ֵ���ڡ�\n��ʱ��
	�����ʱ���յ��ַ�Ϊ���еĵ�һ�����������
	����ѵ�ǰ֮ǰ������ַ�����¼��������һ�С� 
	���յ��ַ�ֵ��Ϊ\nʱ��
	�洢��ǰ�ַ�ֵ����ά�������Ӧλ�� 
	*/ 
	for(i=0,j=0,k=0;c!='\n';j++)
	{
		c=getchar();
		if(c=='\n')
		{
			if(j!=0)
			{
				c=0;
				list[k]=j;
				i++,k++;
				j=-1;
			}
		}
		else
		{	
			mes[i][j]=c;
		}
	}
	*x=i;//��������//
}

//select����ԭ��//
/*
ѡ�������㷨
��Ҫ˼�룺���ΰѺ�����С�����ŵ�ǰ��// 
*/ 
void select(int x,int list[])
{
	int i,k,t,min;
	for(i=0;i<x-1;i++)
	{
		min=list[i];
		for(k=i+1;k<x;k++)
		{
			if(list[k]<min)
			{
				t=list[i];
				list[i]=list[k];
				list[k]=t;
				min=list[i];
			}
		}
	}
}

//statics����ԭ��// 
void statics(int y,int list1[],int list2[],int list3[])
{
	int i,j,k,n;
	/*�㷨��飺 
	�趨�Ѿ�����õ������һ��ֵΪ����ͳ�Ƶĵ�һ��ֵ��
	��ʱ�趨������ȵ��ַ�������Ϊ1
	֮������������Ԫ�أ��������ͬ�ģ���������ͳ����ֵ�ϼ���һ�������������ͬ�ģ���ô����������֣��趨�������Ϊ����ͳ�Ƶĵڶ������֣��Դ����� 
	*/ 
	for(i=0,k=0;k<y;i++)
	{
		list2[i]=list1[k];
		list3[i]=1;
		while(1)
		{
			if(list1[k+1]==list1[k])
			{
				k++;
				list3[i]+=1;		
			}
			else
			{
				k++;
				break;
			}
		}
	}
	
	printf("output:\n");
	printf("Length   Number   Graphic\n");
	printf("-------------------------\n");
	printf("-------------------------\n");
	for(j=0;j<i;j++)
	{
		printf("%-3d          %-3d   ",list2[j],list3[j]);
		for(n=1;n<=list3[j];n++)
			printf("*");
		printf("\n");
	}
	
}

