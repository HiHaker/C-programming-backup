#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>//Ϊ�˲����仯�������// 
#include<conio.h>//һ��ͷ�ļ����������̼������Ϣ���ƶ���꺯��gotoxy(x,y),xΪ������yΪ����// 
#define Boundrylength 30//��Ϸ�Ľ��泤��//
#define Boundrywidth 50//��Ϸ�Ľ�����//
#define UP 'W'
#define DOWN 'S'
#define LEFT 'A'
#define RIGHT 'D'
char ch1=UP,ch2;//�����ʼ�����һ���м�洢����ı���//
struct//����һ���ߵ�ÿһ�ڵĽṹ// 
{
	int x;//ÿһ�ڵ�x����//
	int y;//ÿһ�ڵ�y����//
}Snake[50];
struct//����һ����ʵ�Ľṹ// 
{
	int x;
	int y;
}fruit;
void initialgame();//��ʼ����Ϸ����//
void gotoxy(int,int);//����ƶ�����ԭ��//
void fruitgenerate(int);//�����ʵ���ɺ���// 
int main()//������// 
{
	char select;
	do{
		initialgame();//��ʼ����Ϸ����//
		gotoxy(2,Boundrywidth);
		printf("   GAME OVER! Do you want to continue,(y/n)?\n");
		gotoxy(3,Boundrywidth+3);
		scanf("%c",&select);
	}while(select=='y');
	gotoxy(Boundrylength,0);
	return 0;
}
void initialgame()//��ʼ����Ϸ���棬Ӧ�ð���һ���ߣ�һ����Ϸ��Χ��һ��ʳ��// 
{
	int grades=0,TIMES=300;//���������ʱ��// 
	int i,j,k,index=0,length=4;//�߳�ʼ����// 
	 
	/*��ӡ����Ϸ�Ŀ�ʼ���棬��Ϸ��Χ*/
	system("cls");//����// 
	gotoxy(0,0);//�ص���Ļ��ʼ�ĵط�// 
	for(i=0;i<Boundrywidth;i++)//��ӡ��Ϸ�߽�Ķ�����// 
		printf("#");
	gotoxy(Boundrylength-1,0);//�ƶ����//
	for(i=0;i<Boundrywidth;i++)//��ӡ��Ϸ�߽�ĵײ���// 
		printf("#");
	for(j=0;j<Boundrylength-1;j++)//��ӡ��Ϸ�����// 
	{
		gotoxy(j+1,0);//�ƶ����//
		printf("#"); 
	}
	for(j=0;j<Boundrylength-1;j++)//��ӡ��Ϸ�Ҳ���// 
	{
		gotoxy(j+1,Boundrywidth-1);//�ƶ����// 
		printf("#");
	}
	gotoxy(0,Boundrywidth);
	printf("      ---GRADE---");
	/*��ӡ����Ϸ��ʼʱ�ߵ�λ��*/
	for(k=0;k<length;k++)//�趨��ʼ��������//
	{
		Snake[k].x=Boundrywidth/2-1+k;//��λÿһ�ڵ�����//
		Snake[k].y=Boundrylength/2-1;
		gotoxy(Snake[k].x,Snake[k].y);//�ѹ���ƶ���������//
		if(k==0)
			printf("@");//��ͷ// 
		else
			printf("$");//����// 
	}
	fruitgenerate(length);//���ɹ�ʵ//
	//�߿�ʼ�ƶ�//
	while(1)
	{
		ch2=ch1;//��¼֮ǰ�ķ���//
		if(kbhit())//kbhit�������ж��û��Ƿ����˼�//
		ch1=getch();//��ȡһ����//
		gotoxy(Snake[length-1].x,Snake[length-1].y);
		printf(" ");
		for(i=length-1;i>0;i--)
		{
			Snake[i].x=Snake[i-1].x;
			Snake[i].y=Snake[i-1].y;
		}
		switch (ch1)//�ж��û���������һ������Snake[0]����ͷ//
		{
			case UP:
				if(ch2==DOWN)
				{
					(Snake[0].x)++;
					break;
				}
				else{
				(Snake[0].x)--;
				break;}
			case DOWN:
				if(ch2==UP)
				{
					(Snake[0].x)--;
					break;
				}
				else{
				(Snake[0].x)++;
				break;}
			case LEFT:
				if(ch2==RIGHT)
				{
					(Snake[0].y)++;
					break;
				}
				else{
				(Snake[0].y)--;
				break;}
			case RIGHT:
				if(ch2==LEFT)
				{
					(Snake[0].y)--;
					break;
				}
				else{
				(Snake[0].y)++;
				break;}
		}
		for(i=1;i<length;i++)
		{
			//����ײ��ǽ������ҧ���Լ����趨����ֵΪ1// 
			if(Snake[0].x==Snake[i].x&&Snake[0].y==Snake[i].y)
				index=1;
			else if((Snake[0].x==0||Snake[0].x==Boundrylength-1)||(Snake[0].y==0||Snake[0].y==Boundrywidth-1))
				index=1;
		}
		if(index==1)//��ʾ�������߽����ҧ�����Լ�//
		break;
		//�����߳Ե���ʵʱ���䳤��+1//
		if(Snake[0].x==fruit.x&&Snake[0].y==fruit.y)
		{
			length++;
			for(i=0;i<length;i++)
			{
				gotoxy(Snake[i].x,Snake[i].y);
				printf(" ");
			}
			for(i=1;i<=length-1;i++)
			{
				Snake[i].x=Snake[i-1].x;
				Snake[i].y=Snake[i-1].y;
			}
			Snake[0].x=fruit.x;
			Snake[0].y=fruit.y;
			TIMES-=20;
			grades+=20;
			fruitgenerate(length);
			gotoxy(1,Boundrywidth);
			printf("           %d",grades);
		}
		Sleep(TIMES);
		for(i=0;i<length;i++)
		{
			gotoxy(Snake[i].x,Snake[i].y);
			if(i==0)
				printf("@");
			else
				printf("$");
		}
		
	}
}
void fruitgenerate(int len)
{
	int i,index=0;
	do{
		srand(time(NULL));//����һ������ֵ//
		fruit.x=1+(int)(rand()%(Boundrylength-2-1+1));//�ɳ����������Χ���ʽ����a+(int)rand()%(b-a+1)����֪//
		fruit.y=1+(int)(rand()%(Boundrywidth-2+1-1));
		for(i=0;i<len;i++)
		{
			if(fruit.x==Snake[i].x&&fruit.y==Snake[i].y)
				index=1;
		}
	}while(index==1);//������ֵΪ1ʱ����ʾʳ����ߵ������غϣ���������ʳ��// 
	gotoxy(fruit.x,fruit.y);//�ƶ���굽ʳ������// 
	printf("*");//��ӡʳ��//
}
void gotoxy(int x, int y)//����ָ���ƶ�����//
{
	HANDLE hout;
	COORD cor;
	hout=GetStdHandle(STD_OUTPUT_HANDLE);
	cor.X=y;
	cor.Y=x;
	SetConsoleCursorPosition(hout,cor);
}
