/*��ʾ�����5�����е������*/
#include<stdio.h>
int main()
{
	int i,num,index,maxnum;
	/*�û���������*/
	for(i=1;i<=5;i++)
	{
		printf("Please enter a number:\n");
		scanf("%d",&num);
		/*��ʼʱ�趨������Ϊ�ʼ�������*/ 
		if (i == 1)
			maxnum=num;
		/*���������������и�������������趨������*/ 
		else if (num>maxnum)
		{
			maxnum=num;
			index=i;
		} 
	}
	/*���*/ 
	printf("The biggest number of these numbers is %d, it's the %d .",maxnum,index);
	
	return 0;	
} 
