#include<stdio.h>
void liquid(int,float *,float *,float *);
int main()
{
	int gallons;
	float quarts, pints, cups;
	
	liquid(gallons,&quarts,&pints,&cups);
	
	return 0;
}

void liquid(int gallons,float *qAddr,float *pAddr,float *cAddr)
{
	*qAddr = gallons*0.125;
	*pAddr = gallons*0.25;
	*cAddr = gallons*0.5;
}
