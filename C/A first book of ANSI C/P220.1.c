#include<stdio.h>
void check(int ,float ,double );
int main()
{
	/*��������ʵ��*/
	check(5,0.5,0.365666);
	
	return 0;
}
/*check����*/ 
void check(int x,float y,double z)
{
	printf("%d %f %lf",x,y,z);	
} 

