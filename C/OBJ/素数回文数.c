/*素数回文数*/ 
#include<stdio.h>
int JudgePrime(int );/*判定素数(除了1和它本身不能再被其他数整除)*/
int JudgePalind(int );/*判定回文数*/ 
int main()
{
	int i,obnum,count = 0;
	
	scanf("%d",&obnum);/*输入一个数*/
	
	for(i=11;i<=obnum;i++)
	{
		if(JudgePrime(i)&&JudgePalind(i))/*若既是素数，又是回文数，计数++*/
			count++;
	}
	
	printf("%d",count);
	
	return 0;	
}

int JudgePrime(int num)
{
	int i;
	
	for(i=2;i<=num-1;i++)/*循环对数取余，若其中被数所整除，返回0，否则返回1*/
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
