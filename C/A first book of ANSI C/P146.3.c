#include<stdio.h>
int main()
{
	double temperature,celsius,fahrenheit;
	char alphal;

	printf("Please enter a number,then,hit the SPACE BAR,then, enter a letter\n");
	scanf_s("%lf %c", &temperature, &alphal);

	if (alphal == 'f')
	{
		celsius = (5.0/9.0)*(temperature - 32);
		printf("The celsius is %lf\n", celsius);
	}
	else if (alphal == 'c')
	{
		fahrenheit = (9.0 / 5.0)*temperature + 32;
		printf("The fahrenheit is %lf\n", fahrenheit);
	}
	else
		printf("there are some wrong with the datas\n");

	return 0;
}