#include<stdio.h>
void checknumber(int );
int main()
{
	checknumber(7);
	
	return 0;
}

checknumber(int x)
{
	if (x%2==0)
		printf("��ż��\n");
	else
		printf("������\n");		
}
