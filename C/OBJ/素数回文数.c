/*����������*/ 
#include<stdio.h>
int JudgePrime(int );/*�ж�����(����1�����������ٱ�����������)*/
int JudgePalind(int );/*�ж�������*/ 
int main()
{
	int i,obnum,count = 0;
	
	scanf("%d",&obnum);/*����һ����*/
	
	for(i=11;i<=obnum;i++)
	{
		if(JudgePrime(i)&&JudgePalind(i))/*���������������ǻ�����������++*/
			count++;
	}
	
	printf("%d",count);
	
	return 0;	
}

int JudgePrime(int num)
{
	int i;
	
	for(i=2;i<=num-1;i++)/*ѭ������ȡ�࣬�����б���������������0�����򷵻�1*/
	{
		if (num%i==0)
			return 0;
	}
	
	return 1;
}

int JudgePalind(int num)
{
	int nums = 0,mid1,mid2;
	
	mid1 = num;
	
	do
	{
		mid2 = mid1%10;
		mid1/=10;
		nums = nums*10+mid2;	
	}while(mid1!=0);
	
	if(nums==num)
		return 1;
	else
		return 0;	
} 
