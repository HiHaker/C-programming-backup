#include<stdio.h>
void check(int ,float ,double );
int main()
{
	/*向函数传入实参*/
	check(5,0.5,0.365666);
	
	return 0;
}
/*check函数*/ 
void check(int x,float y,double z)
{
	printf("%d %f %lf",x,y,z);	
} 

