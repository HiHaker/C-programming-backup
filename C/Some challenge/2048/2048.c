#include<stdio.h>
#include<stdlib.h>
#include<windows.h>//gotoxy函数所需要的头文件// 
#include<conio.h>//gotoxy函数所需要的头文件//
#include<time.h>
#define UP 'W'
#define DOWN 'S'
#define LEFT 'A'
#define RIGHT 'D'
char ch;
int judge=0;
struct//定义一个数字结构，用来表示2048里的数字// 
{
	int x;
	int y;
	int value;
}numbers[16];
void gotoxy(int x, int y)//这是指针移动函数//
{
	HANDLE hout;
	COORD cor;
	hout=GetStdHandle(STD_OUTPUT_HANDLE);
	cor.X=y;
	cor.Y=x;
	SetConsoleCursorPosition(hout,cor);
}
void randomnumbers()//随机生成数字函数// 
{
	int i,ranA,ranB,ranC,select,index=0;
	judge=0;
	srand(time(NULL));//生成种子值//
	do{
		ranA = 5+(int)rand()%10;
		ranB = 1+(int)rand()%16;
		ranC = 1 + (int)rand() % 10;
		if (ranC >= 7)//随机出现4和2，出现2的概率要高一点//
			select = 4;
		else
			select = 2;
		if((ranA==5||ranA==8||ranA==11||ranA==14)&&(ranB==1||ranB==6||ranB==11||ranB==16))//判断生成的值是否是坐标值// 
		{
			if (ranA==5&&ranB==1)//进入一个坐标值// 
				{
					if(numbers[0].value==0)//如果此时当前坐标的值为0，则重新生成一个数字，后面以此类推// 
						{
							numbers[0].value=select;
							gotoxy(ranA, ranB);
							printf("%d",select);
							index=1;
						}
				} 
			else if(ranA==5&&ranB==6)//else紧挨着前面一个if语句，不管if控制几个语句// 
				{
					if(numbers[1].value==0)
						{
							numbers[1].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				} 
			else if(ranA==5&&ranB==11)
				{
					if(numbers[2].value==0)
						{
							numbers[2].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				} 
			else if(ranA==5&&ranB==16)
				{ 
					if(numbers[3].value==0)
						{
							numbers[3].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				} 
			else if(ranA==8&&ranB==1)
				{
					if(numbers[4].value==0)
						{
							numbers[4].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				}
			else if(ranA==8&&ranB==6)
				{
					if(numbers[5].value==0)
						{
							numbers[5].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				}
			else if(ranA==8&&ranB==11)
				{
					if(numbers[6].value==0)
						{
							numbers[6].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				}
			else if(ranA==8&&ranB==16)
				{ 
					if(numbers[7].value==0)
						{
							numbers[7].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				} 
			else if(ranA==11&&ranB==1)
				{ 
					if(numbers[8].value==0)
						{
							numbers[8].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				}
			else if(ranA==11&&ranB==6)
				{
					if(numbers[9].value==0)
						{
							numbers[9].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				}
			else if(ranA==11&&ranB==11)
				{ 
					if(numbers[10].value==0)
						{
							numbers[10].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				}
			else if(ranA==11&&ranB==16)
				{ 
					if(numbers[11].value==0)
						{
							numbers[11].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				}
			else if(ranA==14&&ranB==1)
				{ 
					if(numbers[12].value==0)
						{
							numbers[12].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				}
			else if(ranA==14&&ranB==6)
				{ 
					if(numbers[13].value==0)
						{
							numbers[13].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				}
			else if(ranA==14&&ranB==11)
				{ 
					if(numbers[14].value==0)
						{
							numbers[14].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				}
			else if(ranA==14&&ranB==16)
				{ 
					if(numbers[15].value==0)
						{
							numbers[15].value=select;
							gotoxy(ranA,ranB);
							printf("%d",select);
							index=1;
						}
				}
		}
		for(i=0;i<16;i++)
			if(numbers[i].value==0)
				judge=1;
		
}while((index!=1)&&(judge==1));
}
void gamewindow()//游戏主窗体//
{
	int i,j,k,a1,a2,b1,b2,c1,c2,d1,d2,n1,n2,grades=0;
	system("cls");//清屏//
	printf("Hello! Wlecome to the  2048 GAME------HaveFun!\n");//提示信息//
	printf("-------------GRADE--------------");
	for(i=4;i<=16;i+=3)//行//
	{
		gotoxy(i,0);
		for(j=1;j<=21;j++)
			printf("#");
	}
	for(i=0;i<21;i+=5)//列//
	{
		for(j=5;j<=14;j+=3)
		{
			gotoxy(j,i);
			printf("#");
			gotoxy(j+1,i);
			printf("#");
		}
	}
	//初始化空格中的数字// 
	for(i=5,k=0;i<=14;i+=3)
	{
		for(j=1;j<=16;j+=5,k++)
		{
			numbers[k].x=i;
			numbers[k].y=j;
			numbers[k].value=0;
		}
	}
	randomnumbers();
	//游戏核心，通过控制上下左右来实现数字移动//
	while(1)
	{
		if(kbhit())//kbhit函数，判断用户是否按下了键//
		ch=getch();//读取一个键//
		switch (ch)
		{
			case UP:
				{
					n2=4;
					for(a1=8;a1<=14;a1+=3)
					{
						for(a2=1;a2<=16;a2+=5,n2++)
						{
							if(numbers[n2].value==0);//当前方块为0时，代表什么也不做// 
							else
							{
								if(numbers[n2-4].value==0)//方块不为0时，检查它上面的方块是否为0，若为0，则把这个方块向上“移动”// 
								{
									numbers[n2-4].value=numbers[n2].value;
									numbers[n2].value=0;
									gotoxy(a1,a2);
									printf("    ");
									gotoxy(a1-3,a2);
									printf("%d",numbers[n2-4].value);
								}
								else//若上面方块不为0，还需要判断是否两个方块可以合并，即是否两个方块的值相同// 
								{
									if(numbers[n2-4].value==numbers[n2].value)//相同，表示可以进行合并//
									{
										numbers[n2-4].value*=2;
										numbers[n2].value=0;
										gotoxy(a1,a2);
										printf("    ");
										gotoxy(a1-3,a2);
										printf("%d",numbers[n2-4].value);
										grades+=20;
										gotoxy(2,7);
										printf("%10d",grades);
									}
								}
								
							}
						}	
					}
					randomnumbers();
					ch=0;
				}
				break;
			case DOWN:
				{
					n2=11;
					for(a1=11;a1>=5;a1-=3)
					{
						for(a2=16;a2>=1;a2-=5,n2--)
						{
							if(numbers[n2].value==0);//当前方块为0时，代表什么也不做//
							else
							{
								if(numbers[n2+4].value==0)//方块不为0时，检查它下面的方块是否为0，若为0，则把这个方块向下“移动”// 
								{
									numbers[n2+4].value=numbers[n2].value;
									numbers[n2].value=0;
									gotoxy(a1,a2);
									printf("    ");
									gotoxy(a1+3,a2);
									printf("%d",numbers[n2+4].value);
								}
								else//若下面方块不为0，还需要判断是否两个方块可以合并，即是否两个方块的值相同// 
								{
									if(numbers[n2+4].value==numbers[n2].value)//相同，表示可以进行合并//
									{
										numbers[n2+4].value*=2;
										numbers[n2].value=0;
										gotoxy(a1,a2);
										printf("    ");
										gotoxy(a1+3,a2);
										printf("%d",numbers[n2+4].value);
										grades+=20;
										gotoxy(2,7);
										printf("%10d",grades);
									}
								}
								
							}
						}	
					}
					randomnumbers();
					ch=0;
				}
			case LEFT:
				{
					n2=1,n1=n2;
					for(a1=6;a1<=16;a1+=5)
					{
						for(a2=5;a2<=14;a2+=3,n2+=4)
						{
							if(numbers[n2].value==0);//当前方块为0时，代表什么也不做// 
							else
							{
								if(numbers[n2-1].value==0)//方块不为0时，检查它左边的方块是否为0，若为0，则把这个方块向左“移动”// 
								{
									numbers[n2-1].value=numbers[n2].value;
									numbers[n2].value=0;
									gotoxy(a2,a1);
									printf("    ");
									gotoxy(a2,a1-5);
									printf("%d",numbers[n2-1].value);
								}
								else//若左边方块不为0，还需要判断是否两个方块可以合并，即是否两个方块的值相同// 
								{
									if(numbers[n2-1].value==numbers[n2].value)//相同，表示可以进行合并//
									{
										numbers[n2-1].value*=2;
										numbers[n2].value=0;
										gotoxy(a2,a1);
										printf("    ");
										gotoxy(a2,a1-5);
										printf("%d",numbers[n2-1].value);
										grades+=20;
										gotoxy(2,7);
										printf("%10d",grades);
									}
								}
								
							}
						}
						n2=++n1;
					}
					randomnumbers();
					ch=0;
				}
			case RIGHT:
				{
					n2=2,n1=n2;
					for(a1=11;a1>=1;a1-=5)
					{
						for(a2=5;a2<=14;a2+=3,n2+=4)
						{
							if(numbers[n2].value==0);//当前方块为0时，代表什么也不做// 
							else
							{
								if(numbers[n2+1].value==0)//方块不为0时，检查它右边的方块是否为0，若为0，则把这个方块向右“移动”// 
								{
									numbers[n2+1].value=numbers[n2].value;
									numbers[n2].value=0;
									gotoxy(a2,a1);
									printf("    ");
									gotoxy(a2,a1+5);
									printf("%d",numbers[n2+1].value);
								}
								else//若右边方块不为0，还需要判断是否两个方块可以合并，即是否两个方块的值相同// 
								{
									if(numbers[n2+1].value==numbers[n2].value)//相同，表示可以进行合并//
									{
										numbers[n2+1].value*=2;
										numbers[n2].value=0;
										gotoxy(a2,a1);
										printf("    ");
										gotoxy(a2,a1+5);
										printf("%d",numbers[n2+1].value);
										grades+=20;
										gotoxy(2,7);
										printf("%10d",grades);
									}
								}
								
							}
						}
						n2=--n1;
					}
					randomnumbers();
					if(judge!=1)
						return;
					ch=0;
				}
		}
	}
}
int main()
{
	/*char c;
	do
	{*/
		gamewindow();
		gotoxy(5,30);
		printf("GAME OVER!");
		/*gotoxy(6,30);
		printf("Do you want to try again? enter (y/n)");
		gotoxy(7,30);
		scanf("%c",c);
	}while(c=='y');*/
	gotoxy(8,30);
	printf("Thank you!");
	gotoxy(17,0);
	return 0;
}
