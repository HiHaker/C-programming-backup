/*obj循环数*/
#include<stdio.h>
#define SIZE 60
void initialarray(int [],int );
void multinums(int [],int [],int ,int );/*乘法模块*/
int judgenumbers(int [],int [],int );/*判断模块*/ 
int main(void)
{
	int i = 0,j,index=1,length,nums0[SIZE],nums1[SIZE];/*length为字串长度（包括前面的0）,nums0[SIZE]为原始字符串数组，nums1[SIZE]为乘后数组*/
	char c = 'a';
	
	while(c!='\n')/*接受一个整数字串*/
	{
		c = getchar();
		if(c!='\n')
			nums0[i++] = c-48;
		if(c=='\n'&&(i==0||i==1))
			index=0;
		if(i==61)
			break;
	}
	
	length = i-1;/*数串长度*/
	//multinums(nums0,nums1,length,2);
	/*for(i=0;i<=length;i++)
		printf("%d",nums1[i]);*/
	
	
	for(j=2;j<=length+1;j++)/*判断是否为循环数*/
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

void multinums(int num0[],int num1[],int len,int num)/*接收的参数为原数组，乘后数组，长度，乘数*/ 
{
	int i,j,mid,index;
	
	if(num0[0]==0)/*判断之前是否有前导0*/
		index=1;
	else
		index=0;
	
	if(num>=10)/*判断乘数是否大于10，是则其数位长度+1*/
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
		if(num1[j]>=10)/*大于10，进位*/
		{
			mid=num1[j];
			num1[j]%=10;
			if(j!=0)
				num1[j-1]+=mid/10;
		}
	}
}

int judgenumbers(int num0[],int num1[],int len)/*接收的参数为原数组，乘后数组，长度*/ 
{
	int i,j,judge=0;/*i为原数组下标表示，j为乘数组下标表示*/
	
	/*主算法：以乘后数的第一位为检查值，依次从第一位扫描原数组的各个位，当扫描到相同数字时，开始向后检查各位的对应*/
	for(j=0,i=0;;i++)
	{
		if(num0[i]==num1[j])/*扫描到相同数字*/
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
			if(j==len+1)/*跳出循环有两种情况，如果j的值超出了数组长度，说明之前检查的时候都符合*/
				judge=1;
			break;	
		}
	}
	
	return judge;	
}
