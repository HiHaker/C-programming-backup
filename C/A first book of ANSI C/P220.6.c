#include<stdio.h>
void numberchart();
int main()
{
	numberchart();
	
	return 0;
}

void numberchart()
{
	int i;
	for(i=1;i<=10;i++)
		printf("%3d  %3d  %3d\n",i,i*i,i*i*i);
}
