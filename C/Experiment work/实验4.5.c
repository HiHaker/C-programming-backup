/*
ʵ��4.5
�����û���Ҫ�������Ӧ������
������2017.10.18
*/
#include<stdio.h>
int main()
{
	int i, j, k, n, num0;//�����������i��n��������Ŀj���ո���Ŀk����������num0//

	printf("Please input a number of the rhombus's longest side\n");//�����ʾ��Ϣ��������һ��������߳�������//
	printf("Warning : please input a odd number\n");

	scanf_s("%d", &num0);

	while (num0 <= 0 || num0 % 2 == 0)
	{
		printf("Error! please input again!\n");
		scanf_s("%d", &num0);
	}

	i = 1, j = 1, n = 1, k = (num0 - 1) / 2;//��ʼ�����������ݹ۲��֪��ͼ�ε�һ�е���ߵĿո���Ŀ������ߣ�num0-1��/2//

	while (n <= k)//��һ���֣�ͼ�ε��ϰ벿��//
	{
		printf(" ");//��ӡ�ո�//
		n = n + 1;
		if ((n - 1) == k&&j <= num0)
		{
			while (i <= j)
			{
				printf("*");
				i = i + 1;
			}
			printf("\n");//����//
			n = 1, i = 1;//ˢ�±���n,i//
			j = j + 2;//��һ�б�ǰһ��Сͼ�������//
			k = k - 1;//��һ�пո�����һ//
		}
		else continue;
	}

	while (i <= j)//�ڶ����֣���ӡ�м�һ��//
	{
		printf("*");
		i = i + 1;
	}
	printf("\n");

	i = 1;//ˢ�±���//

	k = k + 1, j = j - 2;

	while (n <= k&&k <= (num0 - 1) / 2)//�������֣���ӡͼ�κ�벿��//
	{
		printf(" ");
		n = n + 1;
		if ((n - 1) == k&&j >= 0)
		{
			while (i <= j)
			{
				printf("*");
				i = i + 1;
			}
			printf("\n");
			n = 1, i = 1;
			j = j - 2;
			k = k + 1;
		}
		else continue;
	}

	return 0;
}