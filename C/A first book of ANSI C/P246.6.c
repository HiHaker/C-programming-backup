#include<stdio.h>
#include<ctype.h>
int main()
{
	char inchar;
	
	do
	{
		printf("\nPush any key (type an x to stop)");
		inchar = getchar();/*�����һ��������ַ�*/
		inchar = tolower(inchar);/*ת��ΪСд*/
		getchar();/*��ȡ�����Իس���*/
		
		if (isalpha(inchar))/*��C������һ����0����ʾΪ��*/
			printf("\nThe character entered is a letter.\n");
		else if(isdigit(inchar))
			printf("\nThe character entered is a digit.\n");
			
	}while(inchar!='x');
	
	return 0;
}
