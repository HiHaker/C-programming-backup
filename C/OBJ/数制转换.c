#include<stdio.h>
#include<math.h>
#define MSIZE 20
int transdecimal(char [],int);
void anycimal(char [],int,int);
int main()
{
	int nums1,nums2,midnum;//�м������洢ת��Ϊ10���Ƶ���// 
	char num1[MSIZE],num2[MSIZE];//�����ַ���������ַ���// 
	
	printf("This program is help you to find any two different hexadecimal");//����˵��// 
	printf("non-negative integer conversion (binary ~ hexadecimal),");
	printf("Enter only one line, contains three integers a, n, b."); 
	printf("a means that the following n is a hexadecimal integer,");
	printf("and b means to convert a hexadecimal integer n to a hexadecimal integer");
	printf("a, b are decimal integers, 2 = <a, b <= 16\n");
	
	scanf("%d %s %d",&nums1,num1,&nums2);//��������//
	
	midnum=transdecimal(num1,nums1);//��������������µ�ʮ��������// 
	
	anycimal(num2,midnum,nums2);//�Ѵ�ʮ��������ת��Ϊ�����������//
	
	return 0;
}

int transdecimal(char list1[],int x)//ת��Ϊ10������// 
{
	int i,k,sum=0,list2[MSIZE];
	
	for(i=0;list1[i]!='\0';i++)
	{
		if(list1[i]>=48&&list1[i]<=57)
			list2[i]=list1[i]-'0';
		else if(list1[i]=='A')
			list2[i]=10;
		else if(list1[i]=='B')
			list2[i]=11;
		else if(list1[i]=='C')
			list2[i]=12;
		else if(list1[i]=='D')
			list2[i]=13;
		else if(list1[i]=='E')
			list2[i]=14;
		else if(list1[i]=='F')
			list2[i]=15;
	}

	for(k=0;i>0;k++,i--)
		sum+=list2[k]*pow(x,i-1);
	return sum;
} 
void anycimal(char list3[],int x,int y)//����ת��Ϊy���Ƶ���// 
{
	int i,j,num1,num2=x;
	for(i=0;num2!=0;i++)
	{
		num1=num2%y;
		if(num1>9)
			switch (num1)
			{
				case 10:
					list3[i]='A';
					break;
				case 11:
					list3[i]='B';
					break;
				case 12:
					list3[i]='C';
					break;
				case 13:
					list3[i]='D';
					break;
				case 14:
					list3[i]='E';
					break;
				case 15:
					list3[i]='F';
					break;
			}
		else
			list3[i]=num1+'0';
		num2/=y;
	}
	
	for(;i>=0;i--)
		printf("%c",list3[i]);
}
