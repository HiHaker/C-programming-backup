/*同时请求月份值和日期值（1~12月份值）（2月：1~28，4，6，9，11月：1~30，其他：1~31）*/
#include<stdio.h>
int main()
{
	int month,dates,index=0;
	/*输入月份*/
	do
	{
		printf("Please enter the month:\n");
		scanf("%d",&month);
	}while(month<1||month>12);
	/*输入日子*/
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
	/*输出*/
	printf("The dates is %d month,%d days.",month,dates);
	
	return 0;
}
