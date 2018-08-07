/*
¹úÍõ½±ÀøĞ¡Âó
ºú½¡Áú
2017.10.16
*/
#include<stdio.h>
#include<math.h>
int main()
{
	long double sum, sum1, i, k;

	i = 1;
	sum = 0;
	k = 1;

	while (i <= 54)
	{
		sum = sum + k;
		k = k * 2;
		i = i + 1;
	}

	sum1 = sum / (1.4*pow(10, 8));

	printf("sum=%lf\n", sum);
	printf("sum1=%lf stere\n", sum1);

	return 0;
}