#include<stdio.h>
int huifruit(int );
int lemonjuice(int );
int grape(int );
int applejam(int );
int redsugar(int );
int nut(int );
int main()
{
	huifruit(16);
	lemonjuice(16);
	grape(16);
	applejam(16);
	redsugar(16);
	nut(16);
	
	return 0;
}

int huifruit(int people)
{
	return (1/2*people);
}

int lemonjuice(int people)
{
	return (1/2*people);
}

int grape(int people)
{
	return (1/16*people);
}

int applejam(int people)
{
	return (3/8*people);
}

int redsugar(int people)
{
	return (3/8*people);	
} 

int nut(int people)
{
	return (3/4*people);
}
