#include<stdio.h>

void swap(float *,float *);

int main()
{
	float firstnum,secnum;
	
	printf("Enter two numbers :format(%f %f)");
	scanf("%f %f",&firstnum,&secnum);
	
	printf("\nBefore the call to swap():\n");
	printf(" The value in firstnum is %5.2f\n",firstnum);
	printf(" The value in secnum is %5.2f\n",secnum);
	
	swap(&firstnum,&secnum);/*����swap()����*/
	
	printf("\nAfter the call to swap():\n");
	printf(" The value in firstnum is %5.2f\n",firstnum);
	printf(" The value in secnum is %5.2f\n",secnum);
		
	return 0;
}

void swap(float *num1Addr,float *num2Addr)
{
	float temp;
	
	temp = *num1Addr;/*����firstnum����ֵ*/
	*num1Addr = *num2Addr;
	*num2Addr = temp; 
}

