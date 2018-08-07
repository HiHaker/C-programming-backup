#include<stdio.h>
int main()
{
	int pitch(int);//定义一个名称为pitch的函数//
	int sum;//桃子总数sum//
	
	sum = pitch(1);//调用此函数//

	printf("The sum of the pitches are %d", sum);//输出函数结果//

	return 0;
}
int pitch(int x)//函数首部行//
{
	int n, sum;

	for (n = 1, sum = x; n <= 10; n++)//迭代//
		sum = (sum + 1) * 2;

	return sum;//返回计算的值//
}