#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int seconds;

	seconds = 60;

	while (seconds <= 60&&seconds>=0)
	{
		system("cls");
		printf("%d", seconds);
		Sleep(50);
		seconds = seconds - 1;
	}

	system("pause");
	return 0;
}