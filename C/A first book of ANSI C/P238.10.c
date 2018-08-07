#include<stdio.h>
double def1(int ,int ,int , int);
void def2(int ,int ,int ,int ,int ,int ,int ,int ,int );
int main()
{
	def2(1,2,3,4,5,6,7,8,9);
	return 0;
}

double def1(int a11,int a12,int a21,int a22)
{
	return (a11*a22-a21*a12);
}

void def2(int a11,int a12,int a13,int a21,int a22,int a23,int a31,int a32,int a33)
{
	int result;
	
	result = a11*def1(a22,a23,a32,a33)-a21*def1(a12,a13,a32,a33)+a11*def1(a12,a13,a22,a23);
}

