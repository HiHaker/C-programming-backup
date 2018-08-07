/*计算用户输入的n个正/负数之和*/ 
#include<stdio.h>
int main()
{
	int i,maxnums,count1=0,count2=0;
	double number,postotal=0,negtotal=0;
	/*提示用户输入数据*/
	printf("How many numbers would you count?\nPlease enter the numbers:\n");
	scanf("%d",&maxnums);
	/*循环输入数字*/
	for(i=1;i<=maxnums;i++)
	{
		printf("Enter a number (positive or negative) :");
		scanf("%lf",&number);
		if (number>0)
		{
			postotal+=number;
			count1+=1;
		}
		else if(number<0)
		{
			negtotal+=number;
			count2+=1;
		}
	}
	/*输出数据*/
	printf("\nThe positive's average is %lf\nThe negative's average is %lf\n",postotal/count1,negtotal/count2);
	
	return 0;
}
