#include<stdio.h>
int main()
{
	int num,final=5;
	/*��ͷ*/
	printf("Nuber Square Cube\n");
	printf("------  ------  ----\n");
	/*����*/ 
	for(num=1;num<=final;num++)
		printf("%3d %7d %6d\n",num,num*num,num*num*num);
		
	return 0;
}
