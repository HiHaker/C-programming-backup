//ʹ�ö�ά���鱣���ַ���������ַ������䳤�����//
#include<stdio.h>
#define MSIZE 100//��������// 
int getstrings(char [MSIZE][MSIZE],int []);//���������ڽ����û�����Ķ�ά����// 
int main()
{
	char messages[MSIZE][MSIZE];
	int i,rows,nowrows=0,maxnumbers;
	int length[MSIZE];
	//��ʾ��Ϣ// 
	printf("Please enter the strings\n");
	//�����ַ���// 
	rows=getstrings(messages,length);//����һ���ܵ�������rows//
	//�ж��û��Ƿ��������ַ����������¼�ĵ�һ���ַ�������Ϊ0��˵��û������//
	if(length[0]==0)
		printf("You didn't enter any strings!\n");
	else
	{
		maxnumbers=length[0];//�ٶ�����ַ���Ϊ��һ��//
		for(i=1;i<rows;i++)
		{
			if(length[i]>maxnumbers)
			{
				maxnumbers=length[i];//����ַ����ĳ��ȸ�ֵ��max//
				nowrows=i;//��ǰ����//
			}
		}
		
		printf("This strings is :");
		for(i=0;i<maxnumbers;i++)
			printf("%c",messages[nowrows][i]);
		printf("\nIt's length is %d",maxnumbers);
	}
	return 0;
}
int getstrings(char list[MSIZE][MSIZE],int len[])//�õ������ַ����ĺ���// 
{
	char c='A';//��һ�����ǻس����ַ���c�Ա����������ж�ʹ��// 
	int i=0,j=0,nums=0;//iΪ������jΪ����//
	len[0]=0;
	while(c!='\n')//���ƣ�����һ��ʼ�Ͱ��»س������������������λس���ʱ��������//
	{
		c=getchar();//�����ַ�// 
		if(c=='\n')
		{
			if(j==0);//˵����ʱΪ��һ�У�����C�����ֵ// 
			else//�����ǵ�һ��ʱ//
			{
				i++;//������һ��//
				c='A';//����c��ֵ//
				len[i-1]=nums;//�Ѵ�ʱ���е��ַ����������������Ӧ��//
				nums=0;
				j=0;
			}
		}
		else//û�а��»س���ʱ�����������ַ�//
		{
			list[i][j]=c;//�����ַ�//
			nums++;//���ַ���//
			j++;//����++// 
		}
	}
	return  (i+1);//��������// 
}
