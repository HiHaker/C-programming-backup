//使用二维数组保存字符串并将最长字符串和其长度输出//
#include<stdio.h>
#define MSIZE 100//数组容量// 
int getstrings(char [MSIZE][MSIZE],int []);//函数，用于接收用户输入的二维数组// 
int main()
{
	char messages[MSIZE][MSIZE];
	int i,rows,nowrows=0,maxnumbers;
	int length[MSIZE];
	//提示信息// 
	printf("Please enter the strings\n");
	//输入字符串// 
	rows=getstrings(messages,length);//返回一个总的行数给rows//
	//判断用户是否有输入字符串，如果记录的第一行字符串个数为0，说明没有输入//
	if(length[0]==0)
		printf("You didn't enter any strings!\n");
	else
	{
		maxnumbers=length[0];//假定最长的字符串为第一行//
		for(i=1;i<rows;i++)
		{
			if(length[i]>maxnumbers)
			{
				maxnumbers=length[i];//把最长字符串的长度赋值给max//
				nowrows=i;//当前行数//
			}
		}
		
		printf("This strings is :");
		for(i=0;i<maxnumbers;i++)
			printf("%c",messages[nowrows][i]);
		printf("\nIt's length is %d",maxnumbers);
	}
	return 0;
}
int getstrings(char list[MSIZE][MSIZE],int len[])//得到多行字符串的函数// 
{
	char c='A';//赋一个不是回车的字符给c以便后面的条件判断使用// 
	int i=0,j=0,nums=0;//i为行数，j为列数//
	len[0]=0;
	while(c!='\n')//机制：当在一开始就按下回车键或者连续按下两次回车键时结束输入//
	{
		c=getchar();//接收字符// 
		if(c=='\n')
		{
			if(j==0);//说明此时为第一列，则保留C所存的值// 
			else//当不是第一列时//
			{
				i++;//换到下一行//
				c='A';//重置c的值//
				len[i-1]=nums;//把此时这行的字符串数传进数组的相应行//
				nums=0;
				j=0;
			}
		}
		else//没有按下回车键时，正常输入字符//
		{
			list[i][j]=c;//传进字符//
			nums++;//记字符数//
			j++;//列数++// 
		}
	}
	return  (i+1);//返回行数// 
}
