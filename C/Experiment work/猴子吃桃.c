#include<stdio.h>
int main()
{
	int pitch(int);//����һ������Ϊpitch�ĺ���//
	int sum;//��������sum//
	
	sum = pitch(1);//���ô˺���//

	printf("The sum of the pitches are %d", sum);//����������//

	return 0;
}
int pitch(int x)//�����ײ���//
{
	int n, sum;

	for (n = 1, sum = x; n <= 10; n++)//����//
		sum = (sum + 1) * 2;

	return sum;//���ؼ����ֵ//
}