/*�����û������n����/����֮��*/ 
#include<stdio.h>
int main()
{
	int i,maxnums;
	double number,postotal=0,negtotal=0;
	/*��ʾ�û���������*/
	printf("How many numbers would you count?\nPlease enter the numbers:\n");
	scanf("%d",&maxnums);
	/*ѭ����������*/
	for(i=1;i<=maxnums;i++)
	{
		printf("Enter a number (positive or negative) :");
		scanf("%lf",&number);
		if (number>0)
			postotal+=number;
		else
			negtotal+=number;
	}
	/*�������*/
	printf("\nThe positive total is %lf\nThe negative total is %lf\n",postotal,negtotal);
	
	return 0;
}
