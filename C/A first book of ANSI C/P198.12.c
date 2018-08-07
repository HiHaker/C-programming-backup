#include<stdio.h>
int main()
{
	int num,final=5;
	/*±íÍ·*/
	printf("Nuber Square Cube\n");
	printf("------  ------  ----\n");
	/*ÄÚÈİ*/ 
	for(num=1;num<=final;num++)
		printf("%3d %7d %6d\n",num,num*num,num*num*num);
		
	return 0;
}
