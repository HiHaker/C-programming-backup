#include"graphics.h"//��һ��C����ͼ�ο⣬������Ҫʹ�õĻ����κ���//
#include<stdio.h>
#include<conio.h>//��console input output,���ͷ�ļ��ṩ�û�ͨ������̨�����������������ĺ������������//
#include<time.h>//ʹ�����������������������ʳ��//
int n=3;//����ȫ�ֱ���n��ʼ��Ϊ3//
void Snakeup();
void drawSnake();
void lastdied();
struct Snake//����һ���ߵ����ݽṹ//
{
	int x;
	int y;
}Snake[150];

void lastdied()//��ȥ�ߵ�β��// 
{
	int i=n-1;
	setfillstyle(SOLID_FILL,BLACK);
	bar(Snake[i].x,Snake[i].y,Snake[i].x+30,Snake[i].y+30);
}
void Snakeup()//����һ���������ߵĳ��򣬼�֮ǰ���������֮�������//
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
		bar(Snake[i].x,Snake[i].y,Snake[i].x+30,Snake[i].y+30);//bar������һ�����Σ������ֱ�Ϊ�������һ���ǵ����꣬�ұ߶�Ӧ�ǵ�����// 
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