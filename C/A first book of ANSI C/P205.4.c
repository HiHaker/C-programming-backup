#include<stdio.h>
int main()
{
	int i;
	char c1,c2;
	/*��֤����*/
	do
	{
		printf("Please enter two characters:\n");
		scanf("%c %c",&c1,&c2);
	}while(c2<c1);
	/*���*/ 
	for(i=c1;i<=c2;i++)
		printf("%d %o %x\n",i,i,i);
		
	return 0;
}
