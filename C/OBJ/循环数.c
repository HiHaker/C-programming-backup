/*objѭ����*/
#include<stdio.h>
#define SIZE 60
void initialarray(int [],int );
void multinums(int [],int [],int ,int );/*�˷�ģ��*/
int judgenumbers(int [],int [],int );/*�ж�ģ��*/ 
int main(void)
{
	int i = 0,j,index=1,length,nums0[SIZE],nums1[SIZE];/*lengthΪ�ִ����ȣ�����ǰ���0��,nums0[SIZE]Ϊԭʼ�ַ������飬nums1[SIZE]Ϊ�˺�����*/
	char c = 'a';
	
	while(c!='\n')/*����һ�������ִ�*/
	{
		c = getchar();
		if(c!='\n')
			nums0[i++] = c-48;
		if(c=='\n'&&(i==0||i==1))
			index=0;
		if(i==61)
			break;
	}
	
	length = i-1;/*��������*/
	//multinums(nums0,nums1,length,2);
	/*for(i=0;i<=length;i++)
		printf("%d",nums1[i]);*/
	
	
	for(j=2;j<=length+1;j++)/*�ж��Ƿ�Ϊѭ����*/
	{
		multinums(nums0,nums1,length,j);
		if(!judgenumbers(nums0,nums1,length))
			index=0;
	}
	
	printf("%d",index);
	
	return 0;
} 

void initialarray(int num[],int len)
{
	int i;
	
	for(i=0;i<=len;i++)
		num[i]=0;
}

void multinums(int num0[],int num1[],int len,int num)/*���յĲ���Ϊԭ���飬�˺����飬���ȣ�����*/ 
{
	int i,j,mid,index;
	
	if(num0[0]==0)/*�ж�֮ǰ�Ƿ���ǰ��0*/
		index=1;
	else
		index=0;
	
	if(num>=10)/*�жϳ����Ƿ����10����������λ����+1*/
	{
		j=len+1;
		initialarray(num1,j);	
	}
		
	else
	{
		j=len;
		initialarray(num1,j);	
	}
	
	for(i=len;i>=index;i--,j--)
	{
		num1[j] += num0[i]*num;
		if(num1[j]>=10)/*����10����λ*/
		{
			mid=num1[j];
			num1[j]%=10;
			if(j!=0)
				num1[j-1]+=mid/10;
		}
	}
}

int judgenumbers(int num0[],int num1[],int len)/*���յĲ���Ϊԭ���飬�˺����飬����*/ 
{
	int i,j,judge=0;/*iΪԭ�����±��ʾ��jΪ�������±��ʾ*/
	
	/*���㷨���Գ˺����ĵ�һλΪ���ֵ�����δӵ�һλɨ��ԭ����ĸ���λ����ɨ�赽��ͬ����ʱ����ʼ������λ�Ķ�Ӧ*/
	for(j=0,i=0;;i++)
	{
		if(num0[i]==num1[j])/*ɨ�赽��ͬ����*/
		{
			while(1)
			{
				if(num0[i]!=num1[j]||j>len)
					break;
				if(i==len)
					i=-1;
				i++;
				j++;
			}
			if(j==len+1)/*����ѭ����������������j��ֵ���������鳤�ȣ�˵��֮ǰ����ʱ�򶼷���*/
				judge=1;
			break;	
		}
	}
	
	return judge;	
}
