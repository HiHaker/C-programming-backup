//���һ���������������ַ�����Ԫ�ش��λ����ת//
#include<stdio.h>
#include<string.h>
#define MSIZE 50
void reversearray(char [],int);
int main()
{
	int length;//���鳤��// 
	char message[MSIZE];//�ַ�����//
	gets(message);//���û������ַ�//
	length=strlen(message);
	printf("The strings now is %s",message);//�����ת֮ǰ// 
	reversearray(message,length);//��ת// 
	printf("\nThe strings after reversed is %s",message);//�����ת֮��// 
	return 0;
}
void reversearray(char list[],int len)
{
	int i,j;
	char medium[MSIZE];
	for(i=len-1,j=0;i>=0;i--,j++)
		medium[j]=list[i];
	for(i=0;i<j;i++)
		list[i]=medium[i];
	list[i]='\0';
}
