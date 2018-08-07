#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define MAXCOUNT 10
/*����һ������Ϊfind�ĺ�������������ʹ���۰���ҷ������ַ�������ָ������*/
int find(int[], int, int);
void select(int[], int);
int main()
{
	int key, index,i;/*�������key��������ҪѰ�ҵ���*/
	int nums[MAXCOUNT];

	/*Ϊ���鸳��ֵ*/
	for (i = 0; i < MAXCOUNT; i++)
	{
		printf("\nPlease enter a number(you need to enter %d numbers),you had entered %d numbers", MAXCOUNT, i);
		scanf_s("%d", &nums[i]);
	}
	printf("The array you just enter are:\n");
	for (i = 0; i < MAXCOUNT; i++)
	{
		printf("%d ", nums[i]);
	}

	/*Ϊ���������������*/
	printf("\nThe array you just entered after select sort are:\n");
	select(nums, MAXCOUNT);

	printf("\nPlease input a number that you want to find\n");/*���û�����һ����ҪѰ�ҵ���*/
	scanf_s("%d", &key);

	index=find(nums, MAXCOUNT, key);/*���ú���,������������ݣ����ֵ����Ѱֵ*/

	if (index == 0)/*�������ֵΪ0��˵����������Χ*/
		printf("The number is out of range\n");
	else
		printf("The address of this number in the array is %d\n", index+1);
	return 0;
}

int find(int big0[], int maxcount, int key0)/*����ԭ��*/
{
	int left,right,judge,FOUND=FALSE,index=0;
	left = 0;/*��߽�*/
	right = MAXCOUNT-1;/*�ұ߽�*/
	judge = (left + right) / 2;/*�м�߽�*/

	while (left <= right&&!FOUND)/*�ж����ֵ�Ƿ�С�ڵ����ұ�ֵ���ǵĻ�ִ��ѭ��*/
	{
		if (key0 < big0[judge])/*��Ҫ���ҵ���С�������м�ֵ��ʱ����ô���������ߣ����ұ߽����¶���*/
		{
			right = judge - 1;
		}
		else if (key0 > big0[judge])/*�������¶�����߽�*/
		{
			left = judge + 1;
		}
		else/*���ҵ����ֵ��ʱ�򣬰�����ֵ���ݸ�index������foundΪ1*/
		{
			index = judge;
			FOUND = TRUE;
		}
		judge = (left + right) / 2;/*ÿѭ��һ�Σ�����ȷ���м�ֵ*/
	}
	return index;/*����index����ֵ*/
}

/*ѡ����ԭ��*/
void select(int nums0[], int max)
{
	int i, j,k,min,trans;
	for (i = 0; i < max-1; i++)
	{
		min = nums0[i];
		for (j = i+1; j < max; j++)
		{
			if (nums0[j] < min)
			{
				trans = nums0[i];
				nums0[i] = nums0[j];
				nums0[j] = trans;
				min = nums0[i];
			}
		}
	}
	/*�����������������*/
	for (k = 0; k < max; k++)
	{
		printf("%d ", nums0[k]);
	}
}