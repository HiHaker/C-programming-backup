#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define MAXCOUNT 10
/*定义一个名称为find的函数，其作用是使用折半查找法（二分法）查找指定数据*/
int find(int[], int, int);
void select(int[], int);
int main()
{
	int key, index,i;/*定义变量key用来存贮要寻找的数*/
	int nums[MAXCOUNT];

	/*为数组赋初值*/
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

	/*为所输入的数组排序*/
	printf("\nThe array you just entered after select sort are:\n");
	select(nums, MAXCOUNT);

	printf("\nPlease input a number that you want to find\n");/*让用户输入一个所要寻找的数*/
	scanf_s("%d", &key);

	index=find(nums, MAXCOUNT, key);/*调用函数,输入进数组数据，最大值，找寻值*/

	if (index == 0)/*如果索引值为0，说明数超出范围*/
		printf("The number is out of range\n");
	else
		printf("The address of this number in the array is %d\n", index+1);
	return 0;
}

int find(int big0[], int maxcount, int key0)/*函数原型*/
{
	int left,right,judge,FOUND=FALSE,index=0;
	left = 0;/*左边界*/
	right = MAXCOUNT-1;/*右边界*/
	judge = (left + right) / 2;/*中间边界*/

	while (left <= right&&!FOUND)/*判断左边值是否小于等于右边值，是的话执行循环*/
	{
		if (key0 < big0[judge])/*当要查找的数小于数组中间值的时候，那么这个数在左边，把右边界重新定义*/
		{
			right = judge - 1;
		}
		else if (key0 > big0[judge])/*否则，重新定义左边界*/
		{
			left = judge + 1;
		}
		else/*当找到这个值的时候，把索引值传递给index，设置found为1*/
		{
			index = judge;
			FOUND = TRUE;
		}
		judge = (left + right) / 2;/*每循环一次，重新确定中间值*/
	}
	return index;/*返回index索引值*/
}

/*选择函数原型*/
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
	/*输出经过排序后的数组*/
	for (k = 0; k < max; k++)
	{
		printf("%d ", nums0[k]);
	}
}