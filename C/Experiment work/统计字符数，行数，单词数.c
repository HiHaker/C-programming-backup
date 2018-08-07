#include<stdio.h>
#define MSIZE 81//定义数组容量// 
void getline(int *, int *, int[],char [MSIZE][MSIZE]);//创建一个名为getline的用于用户输入多行字符串的函数// 
int countword(int [],char [MSIZE][MSIZE],int);//创建一个名为countword的函数用于计数字符串中的单词数：此处单词指前后均有空格的字符串// 
int main()
{
	char message[MSIZE][MSIZE];//定义一个二维数组用于储存多行字符串// 
	int nums[MSIZE];//定义一个一维数组用于记录每一行中字符串的字符个数// 
	
	int numwords,numchars=0,numlines=0;//定义三个变量分别用来记录单词数、字符数、行数// 
	printf("Please enter the strings:(press the ENTRR KEY twice to finish)\n");//输出提示信息（当用户在一开始按下回车或连续按下两次回车时终止程序）// 
	
	getline(&numlines,&numchars,nums,message);//调用getline函数得到行数和字符数// 
	numwords=countword(nums,message,numlines);//调用countword函数得到单词数// 
	
	printf("The number of rows is %d,the number of strings is %d,the words is %d\n",numlines,numchars,numwords);//输出结果// 
	
	return 0;
}

//getline函数原型// 
void getline(int *x,int *y,int list[],char mes[MSIZE][MSIZE])
{
	int i,j,k,n=0;
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
		{	mes[i][j]=c;
			n++;
			*y=n;//传送字符值// 
		} 
	}
	*x=i;//传送行数// 
}

//countword函数原型// 
int countword(int list[],char mes[MSIZE][MSIZE],int nls)
{
	/*主要算法
	和判断一行中的单词数类似，即判断每一行中的单词数目，然后相加
	设定索引值 YES 1,NO 0;
	当第一个字符为空格时，设定判断值为NO；
	或者当判断值为NO时，设定判断值为YES，计数加一 
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
	return count;//返回单词数// 
}

