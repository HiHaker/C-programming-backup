#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int flip(int);/*flip函数原型*/
void percentages(int ,int);/*percentage函数原型*/
int main()
{
	int numTosses;
	int heads;
	
	/*请求抛掷硬币的次数*/
	printf("How many times would you like to toss?:\n");
	scanf("%d",&numTosses);
	
	heads = flip(numTosses);
	percentage(numTosses,heads);
	
	return 0;
}

/*这个方法抛掷硬币numtimes次，并且返回正面的次数*/
int flip(int numtimes)
{
	int randvalue;
	int heads = 0;
	int i;
	
	srand(time(NULL));
	
	for(i = 1;i<=numtimes;i++)
	{
		randvalue = 1+(int)rand()%100;
		if (randvalue>50)
			heads++;
	}
	return heads;
}

/*这个方法计算和显示正面和反面的百分比*/
void percentage(int numTosses,int heads)
{
	int tails;
	float perheads,pertails;
	
	if (numTosses == 0)
		printf("There were no tosses, so no percentages can calculated.\n");
	else
	{
		tails = numTosses-heads;
		printf("Number of coin tosses :%d\n",numTosses);
		printf(" Heads :%d ,Tails %d\n",heads,tails);
		perheads = (float)heads/numTosses*100.0;
		pertails = (float)(numTosses - heads)/numTosses*100.0;
		printf("Heads came up %6.2f percent of the time .\n",perheads);
		printf("Tails came up %6.2f percent of the time .\n",pertails);			
	}
}
