#include<stdio.h>
#define MSIZE 12
int findnearbf(int num1)//�ҵ������һ�������������// 
{
	switch (num1)
	{
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 3;
		case 4:
			return 2;
		case 5:
			return 1;
		case 6:
			return 7;
		case 7:
			return 6;
	}
}
void findbaddates()//���������ҵ��������м���13�ţ����������������// 
{
	int i,k,firstdate,firstbf,midcount,baddates[MSIZE];
	
	/*printf("Please enter a number to tell me the Janarury 1th of the week:(1 for monday...etc)\n");*/
	scanf("%d",&firstdate);//����һ��һ�������ڼ�// 
	firstbf=findnearbf(firstdate);//���������һ�������������// 
	for(i=firstbf+7,k=0,midcount=firstbf+7;i<=365;i+=7)//�������// 
	{
		if(i<=31)
		{
			if(i==13)
			{
				baddates[k]=1;
				k++;
			}
			midcount=i;
		}
		else if(i<=59)
		{
			midcount=i;
			midcount-=31;
			if(midcount==13)
			{
				baddates[k]=2;
				k++;
			}
		}
		else if(i<=90)
		{
			midcount=i;
			midcount-=59;
			if(midcount==13)
			{
				baddates[k]=3;
				k++;
			}
		}
		else if(i<=120)
		{
			midcount=i;
			midcount-=90;
			if(midcount==13)
			{
				baddates[k]=4;
				k++;
			}
		}
		else if(i<=151)
		{
			midcount=i;
			midcount-=120;
			if(midcount==13)
			{
				baddates[k]=5;
				k++;
			}
		}
		else if(i<=181)
		{
			midcount=i;
			midcount-=151;
			if(midcount==13)
			{
				baddates[k]=6;
				k++;
			}
		}
		else if(i<=212)
		{
			midcount=i;
			midcount-=181;
			if(i==13)
			{
				baddates[k]=7;
				k++;
			}
		}
		else if(i<=243)
		{
			midcount=i;
			midcount-=212;
			if(midcount==13)
			{
				baddates[k]=8;
				k++;
			}
		}
		else if(i<=273)
		{
			midcount=i;
			midcount-=243;
			if(midcount==13)
			{
				baddates[k]=9;
				k++;
			}
		}
		else if(i<=304)
		{
			midcount=i;
			midcount-=273;
			if(midcount==13)
			{
				baddates[k]=10;
				k++;
			}
		}
		else if(i<=334)
		{
			midcount=i;
			midcount-=304;
			if(midcount==13)
			{
				baddates[k]=11;
				k++;
			}
		}
		else if(i<=365)
		{
			midcount=i;
			midcount-=334;
			if(midcount==13)
			{
				baddates[k]=12;
				k++;
			}
		}
	}
	baddates[k]=0;
	/*printf("The bad dates of this year are :\n");*/
	for(i=0;baddates[i]!=0;i++)
		printf("\n%d",baddates[i]);
}
int main()
{
	findbaddates();
	return 0;
}
