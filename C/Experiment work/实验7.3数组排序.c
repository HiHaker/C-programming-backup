/*�������򣬶������һ�� 10 �����������飬�����������ĺ�����ѡ������ĺ�����ͨ�������� ������������ʾÿ������Ľ�����Ƚ�����������ѡ������Ĳ���*/
#include<stdio.h>
#define MAXCOUNT 10
int main()
{
	void bubble(int[], int);/*����һ���޷���ֵ���͵ĺ�����bubble������ʹ��ð�����򷨶���������*/
	void select(int[], int);/*����һ���޷���ֵ���͵ĺ�����select������ʹ��ѡ�����򷨶���������*/
	int nums1[MAXCOUNT],i;/*����һ������Ϊnums1������*/
	int nums2[MAXCOUNT];/*����һ������Ϊnums2������*/

	/*�����鸳��ֵ*/
	for (i = 0; i < MAXCOUNT; i++)
	{
		printf("Please enter a number ,(you have to enter 10 numbers,you had entered %d numbers)", i);
		scanf_s("%d", &nums1[i]);
	}
	/*����һ��������ͬ������*/
	for (i = 0; i < MAXCOUNT; i++)
	{
		nums2[i] = nums1[i];
	}

	/*����ո�����������ʼ���*/
	printf("The numbers you are just entered is :\n");
	for (i = 0; i < MAXCOUNT; i++)
	{
		printf("%3d ", nums1[i]);
	}
	printf("\n");

	/*���ú�������ʾ���*/
	printf("THE BUBBLE:-------------------\n");
	bubble(nums1, MAXCOUNT);
	printf("\nTHE CHOSE:--------------------\n");
	select(nums2, MAXCOUNT);

	return 0;
}

/*ð�ݺ���ԭ��*/
void bubble(int nums1[], int max)
{
	int i1, j1, k1, moves1=0,trans;/*i1,j1,k1Ϊ����������moves1�������㺯������Ĵ���,trans�������м䴢�����*/

	for (i1 = 0; i1 < max; i1++)/*��ð������֪�����ѭ����Ҫִ����������-1��*/
	{
		for (j1 = 0; j1 < max-1; j1++)/*�ڲ�ѭ���������������ıȽϣ���ķ����ұ�*/
		{
			if (nums1[j1] > nums1[j1 + 1])
			{
				trans = nums1[j1 + 1];
				nums1[j1 + 1] = nums1[j1];
				nums1[j1] = trans;
			}
		}
		moves1++;/*�������Ƚ��˼���*/
		printf("\n");
		for (k1 = 0; k1 < max; k1++)/*�����һ������Ľ��*/
		{
			printf("%3d ", nums1[k1]);
		}
		printf("\n");
	}
	/*�����������Ľ��*/
	printf("The times of the moves are %d\n", moves1);
	printf("The result of the Bubble Sort Method is :\n");
	for (k1 = 0; k1 < max; k1++)
	{
		printf("%3d ", nums1[k1]);
	}
}

/*ѡ��������ԭ��*/
void select(int nums2[], int max)
{
	int i2, j2, k2, moves2=0,min,trans;
	for (i2 = 0; i2 < max - 1; i2++)/*���ѭ��*/
	{
		min = nums2[i2];/*�ٶ�һ����СֵΪ�����1��*/
		for (j2 = i2+1; j2 < max; j2++)/*�����������Ԫ�أ�����и�С�ģ�����以��*/
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
		/*���ÿһ�εĽ��*/
		printf("\n");
		for (k2 = 0; k2 < max; k2++)
		{
			printf("%3d ", nums2[k2]);
		}
	}
	/*������յĽ��*/
	printf("\nThe times of the moves are %d\n", moves2);
	printf("The result of the choosing a sort is :\n");
	for (k2 = 0; k2 < max; k2++)
	{
		printf("%3d ", nums2[k2]);
	}
}
