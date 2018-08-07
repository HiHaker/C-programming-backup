#include<stdio.h>
int main()
{
    unsigned int Hanoi(int);
	unsigned int num1;

	num1 = Hanoi(64);

	printf("The result of the Hanoi is %u\n", num1);

	return 0;
}
unsigned int Hanoi(int x)
{
	int times=1;
	if (x<2)
	{
		times = 1;
	}
	else
	{
		times = 2 * Hanoi(x - 1) + 1;
	}
	return times;
}