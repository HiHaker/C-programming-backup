#include<stdio.h>
#include<ctype.h>
int main()
{
	char inchar;
	
	do
	{
		printf("\nPush any key (type an x to stop)");
		inchar = getchar();/*获得下一个输入的字符*/
		inchar = tolower(inchar);/*转换为小写*/
		getchar();/*获取并忽略回车键*/
		
		if (isalpha(inchar))/*在C语言中一个非0数表示为真*/
			printf("\nThe character entered is a letter.\n");
		else if(isdigit(inchar))
			printf("\nThe character entered is a digit.\n");
			
	}while(inchar!='x');
	
	return 0;
}
