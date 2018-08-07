/*���ļ���ģ��*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int flip(int);/*flip����ԭ��*/
void percentages(int ,int);/*percentage����ԭ��*/
int main()
{
	int i,numTosses = 1000;
	int heads;
	srand(time(NULL));/*����Ϊ����һ������ֵ*/
	/*�Զ�����ģ���¼�*/
	for(i=1;i<=20;i++)
	{
		printf("This is the %d times\n",i);
		heads = flip(numTosses);
		percentages(numTosses,heads);
	}
	
	return 0;
}

/*�����������Ӳ��numtimes�Σ����ҷ�������Ĵ���*/
int flip(int numtimes)
{
	int randvalue;
	int heads = 0;
	int i;
	
	for(i = 1;i<=numtimes;i++)
	{
		randvalue = 1+(int)rand()%100;
		if (randvalue>50)
			heads++;
	}
	return heads;
}

/*��������������ʾ����ͷ���İٷֱ�*/
void percentages(int numTosses,int heads)
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
