#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>//为了产生变化的随机数// 
#include<conio.h>//一个头文件，包含键盘键入的信息和移动光标函数gotoxy(x,y),x为行数；y为列数// 
#define Boundrylength 30//游戏的界面长度//
#define Boundrywidth 50//游戏的界面宽度//
#define UP 'W'
#define DOWN 'S'
#define LEFT 'A'
#define RIGHT 'D'
char ch1=UP,ch2;//定义初始方向和一个中间存储方向的变量//
struct//定义一个蛇的每一节的结构// 
{
	int x;//每一节的x坐标//
	int y;//每一节的y坐标//
}Snake[50];
struct//定义一个果实的结构// 
{
	int x;
	int y;
}fruit;
void initialgame();//初始化游戏界面//
void gotoxy(int,int);//光标移动函数原型//
void fruitgenerate(int);//定义果实生成函数// 
int main()//主函数// 
{
	char select;
	do{
		initialgame();//初始化游戏界面//
		gotoxy(2,Boundrywidth);
		printf("   GAME OVER! Do you want to continue,(y/n)?\n");
		gotoxy(3,Boundrywidth+3);
		scanf("%c",&select);
	}while(select=='y');
	gotoxy(Boundrylength,0);
	return 0;
}
void initialgame()//初始化游戏界面，应该包括一条蛇，一个游戏范围，一个食物// 
{
	int grades=0,TIMES=300;//定义分数，时间// 
	int i,j,k,index=0,length=4;//蛇初始长度// 
	 
	/*打印出游戏的开始界面，游戏范围*/
	system("cls");//清屏// 
	gotoxy(0,0);//回到屏幕开始的地方// 
	for(i=0;i<Boundrywidth;i++)//打印游戏边界的顶部行// 
		printf("#");
	gotoxy(Boundrylength-1,0);//移动光标//
	for(i=0;i<Boundrywidth;i++)//打印游戏边界的底部行// 
		printf("#");
	for(j=0;j<Boundrylength-1;j++)//打印游戏左侧行// 
	{
		gotoxy(j+1,0);//移动光标//
		printf("#"); 
	}
	for(j=0;j<Boundrylength-1;j++)//打印游戏右侧行// 
	{
		gotoxy(j+1,Boundrywidth-1);//移动光标// 
		printf("#");
	}
	gotoxy(0,Boundrywidth);
	printf("      ---GRADE---");
	/*打印出游戏开始时蛇的位置*/
	for(k=0;k<length;k++)//设定初始蛇有三节//
	{
		Snake[k].x=Boundrywidth/2-1+k;//定位每一节的坐标//
		Snake[k].y=Boundrylength/2-1;
		gotoxy(Snake[k].x,Snake[k].y);//把光标移动到此坐标//
		if(k==0)
			printf("@");//蛇头// 
		else
			printf("$");//蛇身// 
	}
	fruitgenerate(length);//生成果实//
	//蛇开始移动//
	while(1)
	{
		ch2=ch1;//记录之前的方向//
		if(kbhit())//kbhit函数，判断用户是否按下了键//
		ch1=getch();//读取一个键//
		gotoxy(Snake[length-1].x,Snake[length-1].y);
		printf(" ");
		for(i=length-1;i>0;i--)
		{
			Snake[i].x=Snake[i-1].x;
			Snake[i].y=Snake[i-1].y;
		}
		switch (ch1)//判断用户按下了哪一个键，Snake[0]是蛇头//
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
			//当蛇撞到墙或者蛇咬到自己，设定索引值为1// 
			if(Snake[0].x==Snake[i].x&&Snake[0].y==Snake[i].y)
				index=1;
			else if((Snake[0].x==0||Snake[0].x==Boundrylength-1)||(Snake[0].y==0||Snake[0].y==Boundrywidth-1))
				index=1;
		}
		if(index==1)//表示蛇碰到边界或者咬到了自己//
		break;
		//否则当蛇吃到果实时，其长度+1//
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
		srand(time(NULL));//生成一个种子值//
		fruit.x=1+(int)(rand()%(Boundrylength-2-1+1));//由程序，随机数范围表达式：（a+(int)rand()%(b-a+1)）可知//
		fruit.y=1+(int)(rand()%(Boundrywidth-2+1-1));
		for(i=0;i<len;i++)
		{
			if(fruit.x==Snake[i].x&&fruit.y==Snake[i].y)
				index=1;
		}
	}while(index==1);//当索引值为1时，表示食物和蛇的身体重合，重新生成食物// 
	gotoxy(fruit.x,fruit.y);//移动光标到食物这里// 
	printf("*");//打印食物//
}
void gotoxy(int x, int y)//这是指针移动函数//
{
	HANDLE hout;
	COORD cor;
	hout=GetStdHandle(STD_OUTPUT_HANDLE);
	cor.X=y;
	cor.Y=x;
	SetConsoleCursorPosition(hout,cor);
}
