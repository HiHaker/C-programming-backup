/*垂直直方图*/
#include<stdio.h>
#define MSIZE 81/*创建容量*/
void strcopy(char [], char []);
int main()
{
	int num[26];
	int i=1,k,j,max;
	/*输入为4行，所以创建4个数组*/
	char str0[MSIZE],str1[MSIZE],str2[MSIZE],str3[MSIZE],str4[MSIZE];
	for(i=0;i<=25;i++)
		num[i] = 0;
	i = 1;
	/*输入*/
	while(i<=4)
	{
		switch(i)
		{
			case 1:
				gets(str1);
				break;
			case 2:
				gets(str2);
				break;
			case 3:
				gets(str3);
				break;
			case 4:
				gets(str4);
				break;
		}
		i++;
	}

	/*统计*/
	i = 1;
	while(i<=4)
	{
		switch(i)
		{
			case 1:
				strcopy(str0,str1);
				break;
			case 2:
				strcopy(str0,str2);
				break;
			case 3:
				strcopy(str0,str3);
				break;
			case 4:
				strcopy(str0,str4);
				break;
		}
		i++;
		k=0;
		while(str0[k])
		{
			switch(str0[k])
			{
				case 'A':
					num[0]++;
					break;
				case 'B':
					num[1]++;
					break;
				case 'C':
					num[2]++;
					break;
				case 'D':
					num[3]++;
					break;
				case 'E':
					num[4]++;
					break;
				case 'F':
					num[5]++;
					break;
				case 'G':
					num[6]++;
					break;
				case 'H':
					num[7]++;
					break;
				case 'I':
					num[8]++;
					break;
				case 'J':
					num[9]++;
					break;
				case 'K':
					num[10]++;
					break;
				case 'L':
					num[11]++;
					break;
				case 'M':
					num[12]++;
					break;
				case 'N':
					num[13]++;
					break;
				case 'O':
					num[14]++;
					break;
				case 'P':
					num[15]++;
					break;
				case 'Q':
					num[16]++;
					break;
				case 'R':
					num[17]++;
					break;
				case 'S':
					num[18]++;
					break;
				case 'T':
					num[19]++;
					break;
				case 'U':
					num[20]++;
					break;
				case 'V':
					num[21]++;
					break;
				case 'W':
					num[22]++;
					break;
				case 'X':
					num[23]++;
					break;
				case 'Y':
					num[24]++;
					break;
				case 'Z':
					num[25]++;
					break;
			}
			k++;
		}
	}
	/*输出,一行一行的输出*/
	max = num[0];
	for(i=1;i<=25;i++)/*找出最大的字母数*/
	{
		if(max<num[i])
			max = num[i];
	}
	for(j=max;j>=1;j--)
	{
		for(i=0;i<=25;i++)
		{
			if(num[i]<j)
				printf(" ");
			else
				printf("*");
			printf(" ");
		}
		printf("\n");
	}
	
	/*打印最后一行*/
	printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
	
	return 0;
}

void strcopy(char strs1[],char strs2[])
{
	int i=0;
	 
	while(strs2[i])
	{
		strs1[i] = strs2[i];
		i++;
	}
	
	strs1[i] = '\0';
}
