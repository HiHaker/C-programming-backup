#include<stdio.h>
//设定数组长度// 
#define MSIZE 81
#define MSIZE 81
void getline(int *, int[],char [MSIZE][MSIZE]);//创建一个名为getline的函数，其作用是接收多行字符串并且得到行数和每行的字符数// 
void select(int ,int []);//创建一个名为select的函数，作用是把一个数组按升序排序// 
void statics(int ,int [],int [],int []);//创建一个名为static的统计函数，作用是把一个数组内的数据统计并且输出//
int main()
{
	char message[MSIZE][MSIZE];//创建一个message二维数组用于存储字符串// 
	int nums[MSIZE],nums0[MSIZE],sstatic[MSIZE];//创建一个nums数组用于存储每行字符数// 
	
	int rows=0,i;//行数//
	
	printf("Please enter a strings:\n");
	getline(&rows,nums,message);
	select(rows,nums);
	statics(rows,nums,nums0,sstatic);
	return 0; 
}

//getline函数原型// 
void getline(int *x,int list[],char mes[MSIZE][MSIZE])
{
	int i,j,k;
	char c;
	
	/*主要算法
	（设定一个结束接收字符输入的条件，选定当用户一开始按下回车键或者连续按下两次回车键时终止字符接收）
	设定一个字符变量用于临时存储字符值
	判断此字符值是否等于\n,不等于时执行循环： 
	当接收的一个字符值等于‘\n’时：
	如果此时接收的字符为该行的第一个，则继续；
	否则把当前之前输入的字符数记录，跳到下一行。 
	接收的字符值不为\n时：
	存储当前字符值到二维数组的相应位置 
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
	*x=i;//传送行数//
}

//select函数原型//
/*
选择排序算法
主要思想：依次把后面最小的数放到前面// 
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

//statics函数原型// 
void statics(int y,int list1[],int list2[],int list3[])
{
	int i,j,k,n;
	/*算法简介： 
	设定已经排序好的数组第一个值为数据统计的第一个值，
	此时设定这个长度的字符串数量为1
	之后检查数组后面的元素，如果有相同的，跳过并在统计数值上加上一，如果遇到不相同的，那么跳到这个数字，设定这个数字为数据统计的第二个数字，以此类推 
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

