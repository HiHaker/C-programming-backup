/*ͬʱ�����·�ֵ������ֵ��1~12�·�ֵ����2�£�1~28��4��6��9��11�£�1~30��������1~31��*/
#include<stdio.h>
int main()
{
	int month,dates,index=0;
	/*�����·�*/
	do
	{
		printf("Please enter the month:\n");
		scanf("%d",&month);
	}while(month<1||month>12);
	/*��������*/
	do
	{
		printf("Please enter the dates:\n");
		scanf("%d",&dates);
		switch (month)
		{
			case 1:
				if(dates>=1&&dates<=31)
					index=1;
				break;
			case 2:
				if(dates>=1&&dates<=28)
					index=1;
				break;
			case 3:
				if(dates>=1&&dates<=31)
					index=1;
				break;
			case 4:
				if(dates>=1&&dates<=30)
					index=1;
				break;
			case 5:
				if(dates>=1&&dates<=31)
					index=1;
				break;
			case 6:
				if(dates>=1&&dates<=30)
					index=1;
				break;
			case 7:
				if(dates>=1&&dates<=31)
					index=1;
				break;
			case 8:
				if(dates>=1&&dates<=31)
					index=1;
				break;
			case 9:
				if(dates>=1&&dates<=30)
					index=1;
				break;
			case 10:
				if(dates>=1&&dates<=31)
					index=1;
				break;
			case 11:
				if(dates>=1&&dates<=30)
					index=1;
				break;
			case 12:
				if(dates>=1&&dates<=31)
					index=1;
		}
	}while(index==0);
	/*���*/
	printf("The dates is %d month,%d days.",month,dates);
	
	return 0;
}
