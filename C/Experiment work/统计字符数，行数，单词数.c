#include<stdio.h>
#define MSIZE 81//������������// 
void getline(int *, int *, int[],char [MSIZE][MSIZE]);//����һ����Ϊgetline�������û���������ַ����ĺ���// 
int countword(int [],char [MSIZE][MSIZE],int);//����һ����Ϊcountword�ĺ������ڼ����ַ����еĵ��������˴�����ָǰ����пո���ַ���// 
int main()
{
	char message[MSIZE][MSIZE];//����һ����ά�������ڴ�������ַ���// 
	int nums[MSIZE];//����һ��һά�������ڼ�¼ÿһ�����ַ������ַ�����// 
	
	int numwords,numchars=0,numlines=0;//�������������ֱ�������¼���������ַ���������// 
	printf("Please enter the strings:(press the ENTRR KEY twice to finish)\n");//�����ʾ��Ϣ�����û���һ��ʼ���»س��������������λس�ʱ��ֹ����// 
	
	getline(&numlines,&numchars,nums,message);//����getline�����õ��������ַ���// 
	numwords=countword(nums,message,numlines);//����countword�����õ�������// 
	
	printf("The number of rows is %d,the number of strings is %d,the words is %d\n",numlines,numchars,numwords);//������// 
	
	return 0;
}

//getline����ԭ��// 
void getline(int *x,int *y,int list[],char mes[MSIZE][MSIZE])
{
	int i,j,k,n=0;
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
		{	mes[i][j]=c;
			n++;
			*y=n;//�����ַ�ֵ// 
		} 
	}
	*x=i;//��������// 
}

//countword����ԭ��// 
int countword(int list[],char mes[MSIZE][MSIZE],int nls)
{
	/*��Ҫ�㷨
	���ж�һ���еĵ��������ƣ����ж�ÿһ���еĵ�����Ŀ��Ȼ�����
	�趨����ֵ YES 1,NO 0;
	����һ���ַ�Ϊ�ո�ʱ���趨�ж�ֵΪNO��
	���ߵ��ж�ֵΪNOʱ���趨�ж�ֵΪYES��������һ 
	*/ 
	#define YES 1
	#define NO 0
	int i,k,inaword,count=0;
	for(i=0;i<nls;i++)
	{
		for(k=0;k<list[i];k++)
		{
			if(mes[i][k]==' ')
				inaword=NO;
			else if(inaword==NO)
			{
				inaword=YES;
				count++;		
			}	
		}
	}
	return count;//���ص�����// 
}

