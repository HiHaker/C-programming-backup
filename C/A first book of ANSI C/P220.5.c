#include<stdio.h>
#include<math.h>
void powfun(int ,int );
int main()
{
	powfun(4,6);
	
	return 0;
}

void powfun(int x,int y)
{	
	printf("%f\n",pow(x,y));
}
