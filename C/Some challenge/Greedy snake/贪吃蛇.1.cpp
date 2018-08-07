#include"graphics.h"//是一个C语言图形库，包含将要使用的画矩形函数//
#include<stdio.h>
#include<conio.h>//即console input output,这个头文件提供用户通过控制台进行数据输入和输出的函数，比如键盘//
#include<time.h>//使用其来置随机数，用来生成食物//
int n=3;//定义全局变量n初始化为3//
void Snakeup();
void drawSnake();
void lastdied();
struct Snake//定义一个蛇的数据结构//
{
	int x;
	int y;
}Snake[150];

void lastdied()//擦去蛇的尾部// 
{
	int i=n-1;
	setfillstyle(SOLID_FILL,BLACK);
	bar(Snake[i].x,Snake[i].y,Snake[i].x+30,Snake[i].y+30);
}
void Snakeup()//定义一个让蛇行走的程序，即之前的坐标等于之后的坐标//
{
	for(int i=n-1;i>0;i--)
	{
		Snake[i].x=Snake[i-1].x;
		Snake[i].y=Snake[i-1].y;	
	}	
}
void drawSnake()
{
	setfillstyle(SOLID_FILL,RED);
	for(int i=0;i<n;i++)
	{
		bar(Snake[i].x,Snake[i].y,Snake[i].x+30,Snake[i].y+30);//bar函数画一个矩形，参数分别为矩形左边一个角的坐标，右边对应角的坐标// 
	}
}
int main()
{
	initgraph(900,900);
	setfillstyle(SOLID_FILL,BLACK);
	Snake[0].y=30;
	Snake[0].x=90;
	Snake[1].y=30;
	Snake[1].x=60;
	Snake[2].y=30;
	Snake[2].x=30;
	
	while(1)
	{
		drawSnake();
		Sleep(300);
		Snakeup();
	}
	closegraph();
	return 0;
}