#include<stdio.h>
int main()
{
	int i,j,k;
	int ranA=14,ranB=6,index=0,judge;
	struct//定义一个数字结构，用来表示2048里的数字// 
{
	int x;
	int y;
	int value;
}numbers[16];

	for(i=5,k=0;i<=14;i+=3)
		{
			for(j=1;j<=16;j+=5,k++)
			{
				numbers[k].x=i;
				numbers[k].y=j;
				numbers[k].value=0;
			}
		}
	judge=(numbers[13].value==0);
	printf("%d",judge);
	do{
	if((ranA==5||ranA==8||ranA==11||ranA==14)&&(ranB==1||ranB==6||ranB==11||ranB==16))
	{
		if(ranA==5&&ranB==1)
			{
			if(numbers[0].value==0)
				printf("heihei");
			}
				
		else if(ranA==5&&ranB==6)
			{
			if(numbers[1].value==0)
				printf("heihei");
			}
			
		else if(ranA==5&&ranB==11)
			{
			if(numbers[2].value==0)
				printf("heihei");
			}
			
		else if(ranA==5&&ranB==16)
			{
			if(numbers[3].value==0)
				printf("heihei");
			}
			
		else if(ranA==8&&ranB==1)
			{
			if(numbers[4].value==0)
				printf("heihei");
			}
			
		else if(ranA==8&&ranB==6)
			{
			if(numbers[5].value==0)
				printf("heihei");
			}
			
		else if(ranA==8&&ranB==11)
			{
			if(numbers[6].value==0)
				printf("heihei");
			}
			
		else if(ranA==8&&ranB==16)
			{
			if(numbers[7].value==0)
				printf("heihei");
			}
				
		else if(ranA==11&&ranB==1)
			{
			if(numbers[8].value==0)
				printf("heihei");
			}
			
		else if(ranA==11&&ranB==6)
			{
			if(numbers[9].value==0)
				printf("heihei");
			}	
			
		else if(ranA==11&&ranB==11)
			{
			if(numbers[10].value==0)
				printf("heihei");
			}
			
		else if(ranA==11&&ranB==16)
			{
			if(numbers[11].value==0)
				printf("heihei");
			}
			
		else if(ranA==14&&ranB==1)
			{
			if(numbers[12].value==0)
				printf("heihei");
			}
			
		else if(ranA==14&&ranB==6)
			{
			if(numbers[13].value==0)
			{
				printf("heihei");
				index=1;
			}
			}
			
		else if(ranA==14&&ranB==11)
			{
			if(numbers[14].value==0)
				printf("heihei");
			}
			
		else if(ranA==14&&ranB==16)
			{
			if(numbers[15].value==0)
				printf("heihei");
			}
	}
	
}while(index!=1);

	return 0;
}
