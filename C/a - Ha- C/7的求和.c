/*
�������ã����ܱ�7�����ĺ�ĩβ���ߵ�����͡�
����ʾ��if �����Բ���Ų��ӷֺţ�����֮��ᵼ�½���ı䣡
����
2017.10.7��
*/
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int i = 1,a = 0;

	while (i <= 100)
	{
		if (i % 7 == 0 || i % 10 == 7)
		{
			a = a + i;
		}
		i = i+1;
	}
	
	printf("sum=%d",a);
	system("pause");

	return 0;
}