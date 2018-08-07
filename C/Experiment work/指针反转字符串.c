//设计一个函数，让任意字符数组元素存放位置逆转(指针存取方式)//
#include<stdio.h>
#include<string.h>
#define MSIZE 50
void reversearray(char *,int);
int main()
{
	int length;//数组长度//
	char message[MSIZE];//字符数组//
	
	gets(message);//让用户输入字符//
	length=strlen(message);

	printf("The strings now is %s\n",message);//输出反转之前// 
	
	reversearray(message,length);//反转// 
	
	printf("The strings after reversed is %s\n",message);//输出反转之后// 
	
	return 0;
}
void reversearray(char *list,int len)
{
	int i,j;
	char medium[MSIZE];
	for(i=len-1,j=0;i>=0;i--,j++)
		*(medium+j)=*(list+i);
	for(i=0;i<j;i++)
		*(list+i)=*(medium+i);
	*(list+i)='\0';
}
