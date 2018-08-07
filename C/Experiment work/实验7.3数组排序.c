/*数组排序，定义包含一个 10 个整数的数组，设计起泡排序的函数和选择排序的函数，通过调用两 个排序函数，显示每趟排序的结果，比较起泡排序与选择排序的差异*/
#include<stdio.h>
#define MAXCOUNT 10
int main()
{
	void bubble(int[], int);/*定义一个无返回值类型的函数“bubble”用来使用冒泡排序法对数组排序*/
	void select(int[], int);/*定义一个无返回值类型的函数“select”用来使用选择排序法对数组排序*/
	int nums1[MAXCOUNT],i;/*定义一个名称为nums1的数组*/
	int nums2[MAXCOUNT];/*定义一个名称为nums2的数组*/

	/*对数组赋初值*/
	for (i = 0; i < MAXCOUNT; i++)
	{
		printf("Please enter a number ,(you have to enter 10 numbers,you had entered %d numbers)", i);
		scanf_s("%d", &nums1[i]);
	}
	/*复制一个数据相同的数组*/
	for (i = 0; i < MAXCOUNT; i++)
	{
		nums2[i] = nums1[i];
	}

	/*输出刚刚输入的数组初始情况*/
	printf("The numbers you are just entered is :\n");
	for (i = 0; i < MAXCOUNT; i++)
	{
		printf("%3d ", nums1[i]);
	}
	printf("\n");

	/*调用函数，显示结果*/
	printf("THE BUBBLE:-------------------\n");
	bubble(nums1, MAXCOUNT);
	printf("\nTHE CHOSE:--------------------\n");
	select(nums2, MAXCOUNT);

	return 0;
}

/*冒泡函数原型*/
void bubble(int nums1[], int max)
{
	int i1, j1, k1, moves1=0,trans;/*i1,j1,k1为计数变量，moves1用来计算函数排序的次数,trans用来作中间储存变量*/

	for (i1 = 0; i1 < max; i1++)/*由冒泡排序法知，外层循环需要执行数组容量-1次*/
	{
		for (j1 = 0; j1 < max-1; j1++)/*内层循环，即两个两个的比较，大的放在右边*/
		{
			if (nums1[j1] > nums1[j1 + 1])
			{
				trans = nums1[j1 + 1];
				nums1[j1 + 1] = nums1[j1];
				nums1[j1] = trans;
			}
		}
		moves1++;/*计数共比较了几次*/
		printf("\n");
		for (k1 = 0; k1 < max; k1++)/*输出第一次排序的结果*/
		{
			printf("%3d ", nums1[k1]);
		}
		printf("\n");
	}
	/*输出最终排序的结果*/
	printf("The times of the moves are %d\n", moves1);
	printf("The result of the Bubble Sort Method is :\n");
	for (k1 = 0; k1 < max; k1++)
	{
		printf("%3d ", nums1[k1]);
	}
}

/*选择排序函数原型*/
void select(int nums2[], int max)
{
	int i2, j2, k2, moves2=0,min,trans;
	for (i2 = 0; i2 < max - 1; i2++)/*外层循环*/
	{
		min = nums2[i2];/*假定一个最小值为数组第1项*/
		for (j2 = i2+1; j2 < max; j2++)/*检查后面的数组元素，如果有更小的，则和其互换*/
		{
			if (nums2[j2] < min)
			{
				trans = nums2[i2];
				nums2[i2] = nums2[j2];
				nums2[j2] = trans;
				min = nums2[i2];
			}
		}
		moves2++;
		/*输出每一次的结果*/
		printf("\n");
		for (k2 = 0; k2 < max; k2++)
		{
			printf("%3d ", nums2[k2]);
		}
	}
	/*输出最终的结果*/
	printf("\nThe times of the moves are %d\n", moves2);
	printf("The result of the choosing a sort is :\n");
	for (k2 = 0; k2 < max; k2++)
	{
		printf("%3d ", nums2[k2]);
	}
}
